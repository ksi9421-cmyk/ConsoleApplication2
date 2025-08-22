#include "Warrior.h"
// #include "Monster.h" 작성중
#include <iostream>
using namespace std;

//생성자
Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "전사";
	cout << "* 전사로 전직하였습니다." << endl;
	HP = 80;
}
void Warrior::attack()
{
	cout << "검울 휘두릅니다." << endl;
}

