#include "Magician.h"
// #include "Monster.h"  들어갈자리...아직 작성중
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "마법사";
	cout << "* 마법사로 전직하였습니다." << endl;
	MP = 80;
}
void Magician::attack()
{
	cout << "지팡이를 휘두릅니다." << endl;
}