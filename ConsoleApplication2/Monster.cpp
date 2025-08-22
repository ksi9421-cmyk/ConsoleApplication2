#include "Monster.h"
#include <iostream>
using namespace std;

//생성자
Monster::Monster(string name)
{
	this->name = name;
	HP = 10;
	power = 30;
	defence = 10;
	speed = 10;
}

//공격 함수
void Monster::attack(Player* Player)
{
	int damage = power - Player->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}
	bool alive = Player->setHP(Player->getHP() - damage);

	cout << name << "이(가) 공격! 데미지: " << damage << endl;

	if (alive)
	{
		cout << Player->getNickname() << "의 남은 HP: " << Player->getHP() << endl;
	}
	else
	{
		cout << Player->getNickname() << "의 남은 HP: 0" << endl;
		cout << name << "몬스터의 승리!" << endl;
	}
}

//setter 구현
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

//getter 구현
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