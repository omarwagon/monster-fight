#pragma once
class Monster
{
private:
	std::string name_ = "none";
	int speed_ = 0;
	int hp_ = 0;
	int def_ = 0;
	int atk_ = 0;

public:
	Monster() = default;
	Monster(std::string name) : name_(name) {};
	Monster(std::string name, int speed, int hp, int def, int atk);

	~Monster();

	int get_hp() { return hp_; }
	std::string get_name() { return name_; }


	void TellTheName();
	void TellTheName(std::string race);

	void GetDamage(int damage);
	void Heal(int heal_value);
	void GetSpeed(int speed);

	bool IsAlive();

};