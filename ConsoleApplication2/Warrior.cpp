#include "Warrior.h"
// #include "Monster.h" �ۼ���
#include <iostream>
using namespace std;

//������
Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "����";
	cout << "* ����� �����Ͽ����ϴ�." << endl;
	HP = 80;
}
void Warrior::attack()
{
	cout << "�˿� �ֵθ��ϴ�." << endl;
}

