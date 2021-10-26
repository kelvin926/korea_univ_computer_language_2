#include <iostream>
#include <string> //string 클래스를 이용하려면, 반드시 필요함.
using namespace std;

int main() {
    string str; // 빈 문자열을 가진 스트링 객체 생성
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address); //address 문자열을 복사한 스트링 객체 생성

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
    string title(text); //text 문자열을 스트링화 함.

    cout << str << endl; //빈 문자열을 출력함
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}