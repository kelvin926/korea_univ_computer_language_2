#include <iostream>
using namespace std;

struct StructCircle { // c++ 구조체 선언 (struct는 기본적으로 public, class는 기본적으로 private)
private:
    int radius;
public:
    StructCircle(int r) { radius = r; } // 구조체의 생성자
    double getArea();
};

double StructCircle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    StructCircle waffle(3);
    cout << "면적은 " << waffle.getArea();
}