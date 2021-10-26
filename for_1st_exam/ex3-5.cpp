#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show() { 
        cout << "(" << x << "," << y << ")" << endl; 
    }
};
Point::Point() : Point(0,0) { } //위임 생성자 (매개변수 없을 때 입력) C++11이후만 가능함. (-std=c++11 옵션 사용 컴파일 할 것.)

Point::Point(int a, int b) //타겟 생성자 (매개변수 있음)
    : x(a), y(b) { }

int main() {
    Point origin; //origin 객체를 매개변수 없이 생성
    Point target(10, 20); //target 객체를 매개변수 넣은 상태로 생성.
    origin.show();
    target.show();
}