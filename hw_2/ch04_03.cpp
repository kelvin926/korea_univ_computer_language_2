/*
2021271424 장현서
과제2_3
*/

#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
int main() {
	Circle circleArray[3];

	int radius;
	for (int i = 0; i < 3; i++) {

		cout << "원" << i + 1 << "의 반지름>>";
		cin >> radius;
		circleArray[i].setRadius(radius);

	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		if (circleArray[i].getArea() > 100)
			count++;
	}
	cout<< "면적이 100보다 큰 원은" << count << "개 입니다" <<endl;

	return 0;
}