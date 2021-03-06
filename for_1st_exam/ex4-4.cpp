#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; } //r값 정하는 함수 선언
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circles[2][3]; //클래스 내 배열 생성

    circles[0][0].setRadius(1); // r = 1
    circles[0][1].setRadius(2); // r = 2 등등
    circles[0][2].setRadius(3);
    circles[1][0].setRadius(4);
    circles[1][1].setRadius(5);
    circles[1][2].setRadius(6);

    for (int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++) {
            cout << "Circle [" << i << "," << j << "]의 면적은 ";
            cout << circles[i][j].getArea() << endl;
        }
}