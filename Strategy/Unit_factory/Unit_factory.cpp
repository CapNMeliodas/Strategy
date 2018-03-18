#pragma once
#include "Unit_factory.h"

std::shared_ptr<Archer> Unit_factory::Create_archer() {
	std::shared_ptr<Archer> new_archer(new Archer);
	return new_archer;
};

std::shared_ptr<Dragon_knight> Unit_factory::Create_dragon_knight() {
	std::shared_ptr<Dragon_knight> new_dragon_knight(new Dragon_knight);
	return new_dragon_knight;
};

std::shared_ptr<Neromonk> Unit_factory::Create_neromonk() {
	std::shared_ptr<Neromonk> new_neromonk(new Neromonk);
	return new_neromonk;
};

std::shared_ptr<Peaceful_alchemist> Unit_factory::Create_peaceful_alchemist() {
	std::shared_ptr<Peaceful_alchemist> new_peaceful_alchemist(new Peaceful_alchemist);
	return new_peaceful_alchemist;
};