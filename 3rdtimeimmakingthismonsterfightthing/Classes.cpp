#include <iostream>

#include "Monster.h"


int main()
{

	Monster orc("shreghk", 6, 150, 6, 4);
	Monster troll("schwyschimblesham", 1, 50, 15, 25);
	Monster elf("harkinian", 12, 10, 4, 3);
	Monster dwarf("thurginir", 2, 25, 15, 8);

	int monster_a;
	int monster_b;
	Monster player1("", 0, 0, 0, 0);
	Monster player2("", 0, 0, 0, 0);

	//orc.TellTheName();
	//troll.TellTheName();
	int PickaMonster();
	{

		std::cout << "__________________________\n";
		std::cout << "Who will you chose?\n";
		std::cout << "[1] shreghk the orc\n";
		std::cout << "[2] schwyschimblesham the troll\n";
		std::cout << "[3] harkinian the elf\n";
		std::cout << "[4] thurginir the dwarf\n";
		std::cout << "__________________________\n";
		std::cin >> monster_a;
		//std::cout << monster_a;
		std::cout << "choose an adversary!\n";
		std::cin >> monster_b;
		//std::cout << monster_b;

		if (monster_a == 1) 
		{ 
			std::cout << "you chose: " << orc.get_name() << std::endl; 
			player1 = orc;
		}
		if (monster_a == 2)
		{ 
			std::cout << "you chose: " << troll.get_name() << std::endl; 
			player1 = troll;
		}
		if (monster_a == 3) 
		{ 
			std::cout << "you chose: " << elf.get_name() << std::endl; 
			player1 = elf;
		}
		if (monster_a == 4) 
		{ 
			std::cout << "you chose: " << dwarf.get_name() << std::endl;
			player1 = dwarf;
		}

		if (monster_b == 1) 
		{ 
			std::cout << "to fight: " << orc.get_name() << std::endl; 
			player2 = orc;
		}
		if (monster_b == 2) 
		{ 
			std::cout << "to fight: " << troll.get_name() << std::endl;
			player2 = troll;
		}
		if (monster_b == 3) 
		{ 
			std::cout << "to fight: " << elf.get_name() << std::endl;
			player2 = elf;
		}
		if (monster_b == 4) 
		{ 
			std::cout << "to fight: " << dwarf.get_name() << std::endl;
			player2 = dwarf;
		}
	}

	
	do
	{
		player1.GetDamage(5);
		std::cout << player1.get_name() << " hp = " << player1.get_hp() << std::endl;

		if (player1.get_hp() <= 0)
		{
			std::cout << player1.get_name() << " is dead......" << std::endl;
			
		}

		//orc.Heal(2);

	} while (player1.get_hp() > 0);

}