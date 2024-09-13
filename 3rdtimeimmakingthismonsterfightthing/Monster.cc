#include <iostream>

#include "Monster.h"


Monster::Monster(std::string name, int speed, int hp, int def, int atk) :
	name_(name),
	speed_(speed),
	hp_(hp),
	def_(def),
	atk_(atk)
{
	std::cout <<  name << " is born !" << std::endl;

	//name_ = name;
	//speed_ = speed;
	//hp_ = hp;
	//def_ = def;
	//atk_ = atk;

}

Monster::~Monster()
{
	std::cout << name_ << " object is destroyed." << std::endl;
}

void Monster::TellTheName()
{
	std::cout << name_ << std::endl;
}
void Monster::TellTheName(std::string race)
{
	std::cout << race << " + " << name_ << std::endl;
}

void Monster::GetDamage(int damage)
{

	this->hp_ -= damage;

	if (hp_ <= 0)
	{
		hp_ = 0;
	}
}

void Monster::Heal(int heal_value)
{
	hp_ += heal_value;
}


bool Monster::IsAlive()
{
	if (hp_ > 0)
	{
		return true;
	}
	else
	{
		return false;
	}

	//return hp_ > 0;

}