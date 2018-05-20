#include "../Unit_factory/Dire_unit_factory.h"


std::shared_ptr<Dire_archer> Dire_unit_factory::create_d_Archer() {
	std::shared_ptr<Dire_archer> new_archer(new Dire_archer);
	return new_archer;
}

std::shared_ptr<Dire_horseman> Dire_unit_factory::create_d_Horseman() {
	std::shared_ptr<Dire_horseman> new_horseman(new Dire_horseman);
	return new_horseman;
}

std::shared_ptr<Dire_knight> Dire_unit_factory::create_d_Knight() {
	std::shared_ptr<Dire_knight> new_knight(new Dire_knight);
	return new_knight;
}

std::shared_ptr<Dire_mage> Dire_unit_factory::create_d_Mage() {
	std::shared_ptr<Dire_mage> new_mage(new Dire_mage);
	return new_mage;
}