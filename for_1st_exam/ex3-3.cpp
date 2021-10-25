#include <iostream>
using namespace std;

class Circle {  //Circle 클래스 생성
public:
    int radius;
    Circle(); //기본 생성자
    Circle(int r); //매개변수 있는 생성자
    double getArea();
};

Circle::Circle() { //매개변수 없는 생성자 생성 (이름은 동일해야 한다.)
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) { //매개변수 있는 생성자 생성
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() { //Circle 클래스의 멤버함수 getArea() 구현 (이름은 동일해야 한다.)
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}