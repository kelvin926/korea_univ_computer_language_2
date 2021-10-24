#include <iostream>
using namespace std; // iostream 헤더 파일 내에 선언된 모든 것들을 사용할 때 std::를 생략함. (std 이름 공간에 선언된 모든 이름에 std:: 생략)
//using std::cout -> cout에 대해서만 std:: 생략.

int main() {
    cout << "너비를 입력하세요>>";

    int width;
    cin >> width; // width 변수에 저장

    cout << "높이를 입력하세요>>";

    int height;
    cin >> height; // height 변수에 저장

// cin >> width >> height; -> 연속으로 여러 값을 받을 수 있다.

    int area = width * height;
    cout << "면적은 " << area << "\n";

    return 0;
}