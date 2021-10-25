#include <iostream>
using namespace std;

int main() {
    int *p; //포인터 int 변수 p

    p = new int; // p에 int타입 동적메모리 1개 할당.
    if(!p) { // if(p==NULL)이랑 같은 의미. 할당 받지 못한 경우.
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5; // 할당 받은 정수 공간에 5 기록
    int n = *p; // n에 할당 받은 값 저장 (비교용)
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p; // 동적메모리 반환
}