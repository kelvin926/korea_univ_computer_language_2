#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
int main() {
    Circle circle;
    Circle &refc = circle; //circle객체의 참조인 refc를 만든다.
    refc.setRadius(10); //circle객체의 radius를 10으로 바꾼다.
    cout << refc.getArea() << " " << circle.getArea(); // 참조의 Area값과 객체의 Area값 비교 (동일)
}