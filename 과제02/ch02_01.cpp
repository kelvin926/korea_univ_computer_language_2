// 2021271424 미래모빌리티학과 장현서
// 과제01_ch02_01.cpp

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            cout << i << "x" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }
}