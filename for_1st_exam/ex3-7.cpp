#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle(); //소멸자 생성
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle() { //소멸자 정의 (소멸자는 오직 한개만 존재하며, 매개변수는 받지 않는다.)
    cout << "반지름 " << radius << "원 소멸 " << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    Circle pizza(30);
    return 0; //main함수가 종료되면, main()함수 안에 생성된 객체들이 소멸된다.
}