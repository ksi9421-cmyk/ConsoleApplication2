#include "Thief.h"
// #include "Monster.h"  ���ڸ�...���� �ۼ���
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "����";
	cout << "* �������� �����Ͽ����ϴ�." << endl;
	speed = 80;
}
void Thief::attack()
{
	cout << "�ܰ��� �ֵθ��ϴ�." << endl;
}