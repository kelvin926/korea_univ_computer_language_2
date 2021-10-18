/*
2021271424 ???
??2_6
*/

#include<iostream>
#include<string>

using namespace std;

class Histogram {
	string str;
public:
	Histogram(string str);
	void put(string str);
	void print();
	void putc(char ch);
};
Histogram::Histogram(string str) { 
	this->str = str;
}
void Histogram::put(string str) {
	this->str += "\n" + str;
}
void Histogram::putc(char ch){
	this->str += ch;
}

void Histogram::print() { 
	int totalAlpha = 0;
	int alphaNum[26] = { 0, }; 
	cout << str << endl << endl;
	for (int i = 0; i < str.size(); i++) {
		if (isalpha(str[i])) {
			totalAlpha++; 
			alphaNum[tolower(str[i]) - 'a'] += 1;
		}
	} 
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << totalAlpha << endl << endl;
	
	for (int i = 0; i < 26; i++) {
		char c = 'a' + i;
		cout << c << " (" << alphaNum[i] << ")\t: ";
		
		for (int j = 0; j < alphaNum[i]; j++)
		{ cout << "*"; } 		
	cout << endl;
	}
}
int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
	return 0;
};
