#pragma once
#include <iostream>
#include "Archer.h"

void Archer::Representation() const{
	std::cout << "Don't worry loves, the cavalry is here!" << std::endl;
}

Archer::Archer() : Unit(100, 50, 28, 10, 0, 2, 0, 0, 2, 4, 0, range_type), Offensive(16, 7, "physical"), Range(2) {};