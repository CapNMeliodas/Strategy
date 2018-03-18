#pragma once
#include <iostream>
#include "Peaceful_alchemist.h"

void Peaceful_alchemist::Representation() const {
	std::cout << "This is my last transmutation. Just sit back and enjoy the show!" << std::endl;
}

Peaceful_alchemist::Peaceful_alchemist() : Unit(320, 260, 120, 35, 4, 4, 4, 4, 2, 5, 0, peaceful_alchemist_type), Supportive(5, 6) {};