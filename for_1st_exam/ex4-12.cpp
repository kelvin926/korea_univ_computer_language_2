#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5]; //string 배열 생성
    
    for(int i=0; i<5; i++) {
        cout << "이름 >>";
        getline(cin, names[i], '\n'); // '\n'을 만날 때 까지 키보드(cin)로부터 문자열을 읽어 name[i]에 저장.
    }

    string latter = names[0];
    for(int i=1; i<5; i++) {
        if(latter < names[i]) { //사전(알파벳  ) 순으로 가장 뒤에 나오는 문자열을 정함.
            latter = names[i];
        }
    }
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}