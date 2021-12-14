#include <iostream>
using namespace std;
// 평균 구하는 프로그램
bool average(int a[], int size, int &avg) { //리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개변수를 추가함
    if(size <= 0)
        return false;
    int sum =0;
    for(int i=0; i<size; i++)
        sum += a[i]; //sum에 다 추가~
    avg = sum / size; //참조 매개변수 avg에 평균값 전달
    return true;
}
// 참조에 의한 호출
int main() {
    int x[] = {0,1,2,3,4,5};
    int avg;
    if(average(x, 6, avg)) cout << "평균은 " << avg << endl; //avg에는 평균이 넘어오고, average()에는 true 리턴
    else cout << "매개변수 오류" << endl;

    if(average(x, -2, avg)) cout << "평균은 " << avg << endl; //avg의 값은 의미 없고, average()에는 false 리턴
    else cout << "매개변수 오류" << endl;
}