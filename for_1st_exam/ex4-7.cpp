#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
    Circle *p, *q; // 포인터 객체 생성
    p = new Circle; // 동적 객체 생성
    q = new Circle(30); // 동적 객체 생성
    cout << p->getArea() << endl << q->getArea() << endl;
    delete p; // 동적 메모리 반환 직전에 객체의 소멸자가 실행된다.
    delete q;
}