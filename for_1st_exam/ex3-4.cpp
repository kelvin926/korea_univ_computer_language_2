#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle(); //위임 생성자
    Circle(int r); //타겟 생성자
    double getArea();
};

Circle::Circle() : Circle(1) { } //위임 생성자 -> C++11이후만 가능함. (-std=c++11 옵션 사용 컴파일 할 것.)
Circle::Circle(int r) { //타겟 생성자
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut; //위임 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은" << area << endl;

    Circle pizza(30); //매개변수 있는 타겟 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은  " << area << endl;
}