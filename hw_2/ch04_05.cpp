/*
2021271424 ������
����2_5
*/

#include <iostream> 
#include <cstdlib> 
#include <ctime>
using namespace std; 
class Player { 	
    string name; public: 	
    void setName(string name) { this->name = name; } 
    string getName() { return name; } }; 
class GamblingGame { 	Player p[2]; 
public: 
    void run(); 	
    bool turn(string name); 	
    ~GamblingGame();
};
void GamblingGame::run() { 	srand((unsigned)time(NULL)); 
    cout << "***** ������ ������ �����մϴ�. *****" << endl; 	string name; 
    cout << "ù��° ���� �̸�>>"; 	
    cin >> name; 	
    p[0].setName(name); 	
    cout << "�ι�° ���� �̸�>>"; 
    cin >> name; 
    p[1].setName(name); 
    cin.ignore(); 
    int end = 0; 	
while (true) { 		
	for (int i = 0; i < 2; i++) {
        if (turn(p[i].getName())) { 			
            cout << p[i].getName() << "�� �¸�!!!" << endl; 				
            end = 1; 			
            break;
        } 			
        else 			
            cout << "�ƽ�����!" << endl; 		
    } 		if (end == 1) 		
        break; 	
}
} bool GamblingGame::turn(string name) { 	string enter; 	
cout << name << "<Enter>";
while (true) { 
    char ch; 		
        cin.get(ch);
        if (ch == '\n') 
        break;
}
int random[3] = { 0, };
for (int i = 0; i < 3; i++) {
    random[i] = rand() % 3;
} 	cout << "\t" << random[0] << '\t' << random[1] << '\t' << random[2] << '\t';
if (random[0] == random[1] && random[1] == random[2]) 
    return true;
else
    return false; } GamblingGame::~GamblingGame() 
{ 	cout << "������ �����մϴ�." << endl; }
int main(void) {
    GamblingGame g; 	g.run();
    return 0;
}