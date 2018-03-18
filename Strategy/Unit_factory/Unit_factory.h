#pragma once
#include <memory>
#include "Archer.h"
#include "Dragon_knight.h"
#include "Neromonk.h"
#include "Peaceful_alchemist.h"

class Unit_factory {
	Unit_factory() {};
	~Unit_factory() = default;

	std::shared_ptr<Archer> Create_archer();
	std::shared_ptr<Dragon_knight> Create_dragon_knight();
	std::shared_ptr<Neromonk> Create_neromonk();
	std::shared_ptr<Peaceful_alchemist> Create_peaceful_alchemist();
};