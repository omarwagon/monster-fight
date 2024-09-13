#pragma once
#include <iostream>

int PickAMonster()
{

	int monsterPicked = 0;

	std::cout << "What monster ?" << '\n';
	std::cout << "==============================================================" << '\n';
	std::cout << "1 - Elf" << '\n';
	std::cout << "2 - Orc" << '\n';
	std::cout << "3 - Dragoon" << '\n';
	std::cout << "4 - Other (create yours)" << '\n';
	std::cout << "==============================================================" << '\n';

	std::cin >> monsterPicked;

	if (monsterPicked >= 1 && monsterPicked <= 4)
		return monsterPicked;
	else
		return 0;

}