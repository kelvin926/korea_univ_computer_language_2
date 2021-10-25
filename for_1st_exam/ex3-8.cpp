#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle(); //소멸자 선언
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

Circle globalDonut(1000); //전역 객체 생성
Circle globalPizza(2000); //전역 객체 생성

void f() {
    Circle fDonut(100); // 함수 f 속 지역 객체 생성
    Circle fPizza(200); // 함수 f 속 지역 객체 생성
}

int main() {
    Circle mainDonut; // 함수 main 속 지역 객체 생성
    Circle mainPizza(30); // 함수 main 속 지역 객체 생성
    f();
    cout << "함수 f 내 지역 객체 소멸 완료!" << endl;
} //함수가 끝나면 소멸한다 -> 전역 객체의 경우 프로그램 종료 직전에 소멸된다.