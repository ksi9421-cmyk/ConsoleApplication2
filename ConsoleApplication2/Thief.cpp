#include "Thief.h"
// #include "Monster.h"  들어갈자리...아직 작성중
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "도적";
	cout << "* 도적으로 전직하였습니다." << endl;
	speed = 80;
}
void Thief::attack()
{
	cout << "단검을 휘두릅니다." << endl;
}