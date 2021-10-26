#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    Rectangle(); //기본 생성자
    Rectangle(int w, int h); //매개변수가 2개인 생성자
    Rectangle(int length); //매개변수가 1개인 생성자
    bool isSquare(); //리턴 값이 bool형인 함수 선언
};

Rectangle::Rectangle() { //기본 생성자 정의
    width = height = 1;
}

Rectangle::Rectangle(int w, int h) { //매개변수가 2개인 생성자 정의
    width = w; height = h;
}

Rectangle::Rectangle(int length) { //매개변수가 1개인 생성자 정의
    width = height = length;
}

bool Rectangle::isSquare() { //멤버 함수 정의 (정사각형 유무)
    if(width == height) return true;
    else return false;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다" << endl;
    if(rect2.isSquare()) cout << "rect2는 정사각형이다" << endl;
    if(rect3.isSquare()) cout << "rect3는 정사각형이다" << endl;
} 