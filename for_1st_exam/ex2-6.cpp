#include <iostream>
using namespace std;

int main() {
    cout << "주소를 입력하세요>>";

    char address[100];
    cin.getline(address, 100, '\n'); 
    //cin(공백을 만나면 종료됨)의 멤버 함수 -> cin.getline(문자열을 저장할 배열, 배열의 크기, 입력 끝을 지정하는 구분 문자) -> 공백이 있어도, 엔터키가 입력될 때 까지 최대99개의 문자를 address에 입력.

    cout << "주소는 " << address << "입니다\n";
}