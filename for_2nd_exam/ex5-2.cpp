#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; } // this는 해당 class를 가르킴. 매개변수로 받은 radius와 객체의 radius를 명시적으로 구분하기 위함.
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14* radius * radius; }
};

Circle getCircle() {
    Circle tmp(30);
    return tmp; // 객체 tmp를 리턴한다.
}

int main() {
    Circle c; // 객체 생성 -> radius = 1
    cout << c.getArea() << endl; // 3.14 * 1 * 1

    c = getCircle(); //tmp 객체를 복사받는다. radius = 30
    cout << c.getArea() << endl; // 3.14 * 30 * 30
}