#include <iostream>
using namespace std;

int main() {
    cout << "이름을 입력하세요 >>";

    char name[11]; // 한글은 5글자(문자당 2바이트), 영문은 10개까지 입력 가능.
    cin >> name; // 입력내용을 문자열에 저장.

    cout << "이름은 " << name << "입니다\n";
}