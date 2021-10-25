#include <iostream>
#include <string> //string 클래스를 사용하기 위한 헤더파일.
using namespace std;

int main(){
    string song("Falling in love with you"); // 문자열
    string elvis("Elvis Presley");
    string singer;
    cout << song + "를 부른 가수는"; // +로 문자열 연결.
    cout << "(힌트 : 첫 글자는" << elvis[0] << ")?";

    getline(cin, singer); //getline()은 string타입의 문자열을 받기 위해 제공되는 전역 함수이다.
    if(singer == elvis)
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다" + elvis + "입니다." << endl;}