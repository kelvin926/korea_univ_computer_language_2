#include <iostream>
using namespace std;

class PrivateAccessError {
private: // 클래스 멤버 함수만 접근 가능
    int a;
    void f();
    PrivateAccessError();
public: // 모든 함수 접근 가능
    int b;
    PrivateAccessError(int x);
    void g();
};

PrivateAccessError::PrivateAccessError() {
    a = 1;
    b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
    a = x;
    b = x;
}

void PrivateAccessError::f() {
    a = 5;
    b = 5;
}

void PrivateAccessError::g() {
    a = 6;
    b = 6;
}

int main() {
    PrivateAccessError objA; // 생성자 PrivateAccessError()은 Private이므로, main()에서 호출할 수 없다. (멤버함수만 가능)
    PrivateAccessError objB(100); // public
    objA.a = 10; // a는 PrivateAccessError클래스의 Private 멤버이므로, main()에서 접근할 수 없다.
    objB.b = 20; // public
    objB.f(); // f()는 PrivateAccessError 클래스의 Private 멤버이므로, main()에서 접근할 수 없다.
    objB.g(); // public
}