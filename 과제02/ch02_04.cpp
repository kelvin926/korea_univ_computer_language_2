// 2021271424 미래모빌리티학과 장현서
// 과제01_ch02_04.cpp
#include <iostream>
using namespace std;
#include <iostream>
#include <cstring>
using namespace std;
int espresso(int num);
int americano(int num);
int cappuccino(int num);
int main() {
    char coffee[100];
    int num, sum = 0;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
    for (;;) {
        if (sum >= 20000) {
            cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
            break;
        }
        cout << "주문>>";
        cin >> coffee >> num;
        if (strcmp(coffee, "에스프레소") == 0) {
            cout << espresso(num) << "원입니다. 맛있게 드세요\n";
            sum += espresso(num);
        }
        else if (strcmp(coffee, "아메리카노") == 0) {
            cout << americano(num) << "원입니다. 맛있게 드세요\n";
            sum += americano(num);
        }
        else if (strcmp(coffee, "카푸치노") == 0) {
            cout << cappuccino(num) << "원입니다. 맛있게 드세요\n";
            sum += cappuccino(num);
        }
        else {
            cout << "입력을 잘못한거 같아요!\n";
        }
    }
}
int espresso(int num) {
    return num * 2000;
}
int americano(int num) {
    return num * 2300;
}
int cappuccino(int num) {
    return num * 2500;
}
