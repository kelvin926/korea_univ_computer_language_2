#include <iostream>
#include <string>
using namespace std;
class Point {
    int x, y;
public:
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint : public Point {
    string name;
public:
    ColorPoint() : Point(0, 0) { name = "BLACK"; }
    ColorPoint(int x, int y) : Point(x, y) { name = "BLACK"; }
    void setPoint(int x, int y) { move(x, y); }
    void setColor(string name) { this->name = name; }
    void show() { cout << name << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl; }
};
int main() {
    ColorPoint zeroPoint;
    zeroPoint.show();
    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}