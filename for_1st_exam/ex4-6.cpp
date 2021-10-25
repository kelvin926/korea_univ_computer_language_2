#include <iostream>
using namespace std;

int main() {
    cout << "입력할 정수의 개수는? ";
    int n;
    cin >> n; // n = 입력할 정수의 개수
    if(n <= 0) return 0; // 음수 일 때 정지
    int *p = new int[n]; // n개의 정수 배열 동적 메모리 할당
    if(!p) { // 동적 메모리 할당 실패
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: "; // 배열은 0부터 시작하지만, 출력으로는 1번째 정수 부터 시작.
        cin >> p[i]; // i=0 배열부터 시작.
    }

    int sum = 0; // sum 초기화
    for(int i = 0; i < n; i++) {
        sum += p[i]; // 누적합
    }
    cout << "평균 = " << sum/n << endl;

    delete [] p; // 동적 배열 메모리 반환
}