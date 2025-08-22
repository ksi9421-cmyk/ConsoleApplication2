#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Monster
{
public:
    Monster(string name);

    void attack(Player* Player);
    
    // getter 함수
    string getname();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    // setter 함수
    void setname(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};