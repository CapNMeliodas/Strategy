#pragma once
#include <iostream>
#include "Dragon_knight.h"

void Dragon_knight::Representation() const {
	std::cout << "Who calls the dragon knight?!" << std::endl;
}

Dragon_knight::Dragon_knight() : Unit(240, 110, 180, 30, 6, 6, 0, 2, 4, 5, 1, dragon_knight_type), Offensive(20, 1, "fire"), Melee(10, 2, 1) {};
