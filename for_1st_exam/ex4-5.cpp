#include <iostream>
using namespace std;

int main() {
    int *p; //포인터 int 변수 p

    p = new int; // p에 int타입 동적메모리 1개 할당.
    if(!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5; // 할당 받은 정수 공간에 5 기록
    int n = *p; // n에 할당 받은 값 기록
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
}