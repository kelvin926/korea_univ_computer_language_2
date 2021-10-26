#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(); // 기본 생성자
    ~Circle() { } // 소멸자
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() { // 기본 생성자
    radius = 1;
}

int main() {
    cout << "생성하고자 하는 원의 개수?";
    int n, radius;
    cin >> n;
    if(n <= 0) return 0;

    Circle *pArray = new Circle [n]; //배열 동적 메모리 할당
    for(int i = 0; i < n; i++) {
        cout << "원" << i+1 << ": ";
        cin >> radius;
        pArray[i].setRadius(radius); //객체 동적 메모리 배열에 반지름 대입
    }

    int count = 0;
    Circle* p = pArray; //pArray를 가르키는 포인터 변수 p 선언
    for(int i = 0; i < n; i++) {
        cout << p->getArea() << ' ';
        if(p->getArea() >= 100 && p->getArea() <= 200)
            count++;
        p++;
    }
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
    delete [] pArray;
}