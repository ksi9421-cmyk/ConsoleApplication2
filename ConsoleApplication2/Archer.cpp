#include "Archer.h"
// #include "Monster.h"  ���ڸ�...���� �ۼ���
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "�ü�";
	cout << "* �ü��� �����Ͽ����ϴ�." << endl;
	accuracy = 80;
}
void Archer::attack()
{
	cout << "Ȱ�� ���ϴ�." << endl;
}