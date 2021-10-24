/*
2021271424 장현서
과제2_2
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cout << "아래에 한줄을 입력하시오.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str, '\n');
		if(str == "exit")
			break;

		string reversword = str;
		int length = reversword.size();
		char temp;
		for (int i = 0; i < length / 2; i++) {
			temp = reversword[i];
			reversword[i] = reversword[length - i - 1];
			reversword[length - 1 - i] = temp;
		}
		cout << reversword << endl;


	}
	return 0;
}