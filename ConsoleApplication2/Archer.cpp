#include "Archer.h"
// #include "Monster.h"  들어갈자리...아직 작성중
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	cout << "* 궁수로 전직하였습니다." << endl;
	accuracy = 80;
}
void Archer::attack()
{
	cout << "활을 쏩니다." << endl;
}