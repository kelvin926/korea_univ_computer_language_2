#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글 안됨) " << endl;
    getline(cin, s, '\n'); //문자열 입력
    int len = s.length(); // s의 길이를 len에 저장

    for (int i = 0; i < len; i++) {
        string first = s.substr(0, 1); // 맨 앞의 문자 1개를 first문자열로 서브스트링화.
        string sub = s.substr(1, len-1); // 맨 앞 문자 1개를 제외한 나머지 문자들을 문자열로 분리.
        s = sub + first; //문자열 회전.
        cout << s << endl;
    }
}