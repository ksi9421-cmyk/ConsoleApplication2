#include "Monster.h"
#include <iostream>
using namespace std;

//������
Monster::Monster(string name)
{
	this->name = name;
	HP = 10;
	power = 30;
	defence = 10;
	speed = 10;
}

//���� �Լ�
void Monster::attack(Player* Player)
{
	int damage = power - Player->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}
	bool alive = Player->setHP(Player->getHP() - damage);

	cout << name << "��(��) ����! ������: " << damage << endl;

	if (alive)
	{
		cout << Player->getNickname() << "�� ���� HP: " << Player->getHP() << endl;
	}
	else
	{
		cout << Player->getNickname() << "�� ���� HP: 0" << endl;
		cout << name << "������ �¸�!" << endl;
	}
}

//setter ����
void Monster::setname(string name)
{
	this->name = name;
}
bool Monster::setHP(int HP)
{
	if (HP <= 0)
	{
		this->HP = 0;
		return false;
	}
	this->HP = HP;
	return true;
}
void Monster::setPower(int power) 
{
	this->power = power; 
}
void Monster::setDefence(int defence) 
{ 
	this->defence = defence; 
}
void Monster::setSpeed(int speed) 
{
	this->speed = speed; 
}

//getter ����
string Monster::getname() 
{ 
	return name; 
}
int Monster::getHP() 
{ 
	return HP; 
}
int Monster::getPower() 
{ 
	return power; 
}
int Monster::getDefence() 
{ 
	return defence; 
}
int Monster::getSpeed() 
{ 
	return speed; 
}