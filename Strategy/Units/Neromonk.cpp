#pragma once
#include <iostream>
#include "Neromonk.h"

void Neromonk::Representation() const {
	std::cout << "Ai da ehei da oho! Nam pod dram idti legko!" << std::endl;
}

Neromonk::Neromonk() : Unit(400, 300, 210, 45, 3, 3, 3, 3, 3, 5, 0, neromonk_type), Offensive(35, 2, "dark"), Melee(15, 2, 2) {};