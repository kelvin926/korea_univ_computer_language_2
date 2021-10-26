#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; // 스트링 s 생성
    cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
    getline(cin, s, '\n'); // s에 입력값 저장
    int sum = 0, startIndex = 0;
    while (true) {
        int fIndex = s.find('+', startIndex); // 인덱스0부터 + 연산자 찾기.
        if(fIndex == -1) { // + 문자가 없음! -> 맨 뒷부분 숫자만 있다.
            string part = s.substr(startIndex);  //startIndex부터 서브스트링 part에 저장

            if (part == "") {
            break; // +로 끝났을 때 break [계산 끝을 의미]
            }

            cout << part << endl; // 검출한 숫자
            sum += stoi(part); //문자열을 숫자로 변환해서 sum에 누적 덧셈.
            break; //계산 끝.
        }
        // +연산자가 있음!
        int count = fIndex - startIndex; // startIndex부터 몇개를 자를건지 계산.
        string part = s.substr(startIndex, count); //startIndex부터 count개만큼 part 서브스트링에 저장

        cout << part << endl; //검출한 숫자 part 출력
        sum += stoi(part); // 문자열을 숫자로 변환해서 sum에 누적 덧셈
        startIndex = fIndex+1; //검색할 인덱스 증가.
    }
    cout << "숫자들의 합은 " << sum;
}

// 1+2+3+4+
// 01234567 index