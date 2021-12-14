#include <iostream>
using namespace std;

//배열 s의 index 원소 공간에 대한 참조를 리턴하는 함수
char &find(char s[], int index) {
    return s[index]; // s[index] 공간의 참조 리턴
}

int main() {
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S'; //find()가 리턴한 s[0]에 문자 'S' 지정
    cout << name << endl;

    char &ref = find(name, 2); //ref는 name[2]에 대한 참조 - k
    ref = 't';
    cout << name << endl;
}