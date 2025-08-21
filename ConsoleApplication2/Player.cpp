#include "Player.h"
#include <iostream>
using namespace std;

// setter 구현
void Player::setNickname(string nickname)
{
	this->nickname = nickname;
}

bool Player :: setHP(int HP)
{
	if(HP < 0)
	{
		return false;
	}
}

bool Player::setMP(int MP)
{
	if (MP < 0)
	{
		return false;
	}
}

void Player::setPower(int power)
{
	this->power = power;
}

void Player::setDefence(int defence)
{
	this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
	this->speed = speed;
}

//getter 구현

string Player:: getJobName()
{

int getLevel();
string Player :: getNickname()
{
	return nickname;
}
int Player :: getHP()
{
	return 50;
}
int Player :: getMP()
{
	return 50;
}
int Player::getPower()
{
	return 10;
}
int Player::getDefence()
{
	return 10;
}
int Player::getAccuracy()
{
	return 10;
}
int Player::getSpeed()
{
	return 10;
}

