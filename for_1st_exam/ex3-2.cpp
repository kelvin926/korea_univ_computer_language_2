#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;
    int getArea(); //함수 선언
}; //세미클론 꼭 써야함!

int Rectangle::getArea() { //함수 구현
    return width * height;
}

int main() { //문제 : 이 main문을 사용할 수 있도록 클래스를 만들어라!
    Rectangle rect; //rect 객체 생성
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}