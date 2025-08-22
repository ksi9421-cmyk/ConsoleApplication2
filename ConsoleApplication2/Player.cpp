#include "Player.h"
#include <iostream>
using namespace std;

//생성자
Player::Player(string nickname)
{
	this->nickname = nickname;
	this->level = 1;
	this->HP = 100;
	this->MP = 50;
	this->power = 10;
	this->defence = 5;
	this->accuracy = 5;
	this->speed = 5;
	this->job_name = "모험가";
}

//플레이어 상태 출력
void Player::printPlayerStatus() {
	cout << "------------------------------------" << endl;
	cout << "* 현재 능력치" << endl;
	cout << "닉네임: " << nickname << endl;
	cout << "직업: " << job_name << endl;
	cout << "Lv. " << level << endl;
	cout << "HP: " << HP << endl;
	cout << "MP: " << MP << endl;
	cout << "공격력: " << power << endl;
	cout << "방어력: " << defence << endl;
	cout << "정확도: " << accuracy << endl;
	cout << "속도: " << speed << endl;
	cout << "------------------------------------" << endl;
}


// setter 구현
void Player::setNickname(string nickname)
{
	this->nickname = nickname;
}

bool Player::setHP(int HP)
{
	if(HP < 0)
	{
		return false;
	}
	this->HP = HP;
	return true;
}

bool Player::setMP(int MP)
{
	if (MP < 0)
	{
		return false;
	}
	this->MP = MP;
	return true;
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
string Player::getJobName()
{
	return job_name;
}
string Player::getNickname()
{
	return nickname;
}
int Player::getLevel()
{
	return level;
}
int Player::getHP()
{
	return HP;
}
int Player :: getMP()
{
	return MP;
}
int Player::getPower()
{
	return power;
}
int Player::getDefence()
{
	return defence;
}
int Player::getAccuracy()
{
	return accuracy;
}
int Player::getSpeed()
{
	return speed;
}