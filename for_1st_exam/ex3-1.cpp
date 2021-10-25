#include <iostream>
using namespace std;

class Circle { //클래스 선언
public:
    int radius;
    double getArea(); //멤버 함수 선언
}; //세미클론 꼭 써야함

double Circle::getArea() { //Circle 클래스의 멤버함수 getArea() 구현
    return 3.14*radius*radius;
}

int main() {
    Circle donut; //객체 donut 생성
    donut.radius = 1; //donut의 멤버 변수 입력
    double area = donut.getArea(); //donut의 멤버 함수 호출 (area는 main함수 내 변수로 만든거임!!!)
    cout << "donut 면적은  " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은  " << area << endl;
}