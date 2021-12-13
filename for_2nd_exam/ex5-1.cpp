#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main() {
    Circle waffle(30);
    increase(waffle); // increase의 c 객체에 waffle이 복사되어, r+1이 이루어지지만, waffle객체 자체의 값은 변하지 않는다.
    // 따라서 increase 함수가 끝나는 즉시 소멸자가 실행된다. (즉, 생성자는 실행되지 않고, 소멸자만 실행된다. (비대칭구조))
    cout << waffle.getRadius() << endl;
}