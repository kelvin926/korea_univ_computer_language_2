#include <iostream>
using namespace std;
class Color {
    int red, green, blue;
public:
    Color() { red = green = blue = 0; }
    Color(int r, int g, int b) { red = r; green = g; blue = b; }
    void setColor(int r,int g, int b) { red = r; green = g; blue = b; }
    void show() { cout << red << ' ' << green << ' ' << blue << endl; }
    Color operator+(Color op2);
    bool operator==(Color op2);
};
Color Color::operator+(Color op2) {
    Color tmp;
    tmp.red = this->red + op2.red;
    tmp.green = this->green + op2.green;
    tmp.blue = this->blue + op2.blue;
    return tmp;
}
bool Color::operator==(Color op2) {
    if (this->red == op2.red&&this->green == op2.green&&this->blue == op2.blue)
        return true;
    else return false;
}
int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();
    Color fuchsia(255, 0, 255);
    if (c == fuchsia)
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";
}