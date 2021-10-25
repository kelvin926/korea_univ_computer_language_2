#include <iostream>
using namespace std;

class Adder { //덧셈
    int op1, op2;
public:
    Adder(int a, int b);
    int process();
};

Adder::Adder(int a, int b) {
    op1 = a; op2 = b;
}

int Adder::process() {
    return op1 + op2;
}

class Calculator { //계산기
public:
    void run();
};

void Calculator::run() {
    cout << "두 개의 수를 입력하세요>>";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();
}

int main() {
    Calculator calc;
    calc.run();
}