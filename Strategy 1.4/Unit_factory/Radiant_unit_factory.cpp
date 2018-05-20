#include "../Unit_factory/Radiant_unit_factory.h"


std::shared_ptr<Radiant_archer> Radiant_unit_factory::create_r_Archer() {
	std::shared_ptr<Radiant_archer> new_archer(new Radiant_archer);
	return new_archer;
}

std::shared_ptr<Radiant_horseman> Radiant_unit_factory::create_r_Horseman() {
	std::shared_ptr<Radiant_horseman> new_horseman(new Radiant_horseman);
	return new_horseman;
}

std::shared_ptr<Radiant_knight> Radiant_unit_factory::create_r_Knight() {
	std::shared_ptr<Radiant_knight> new_knight(new Radiant_knight);
	return new_knight;
}

std::shared_ptr<Radiant_mage> Radiant_unit_factory::create_r_Mage() {
	std::shared_ptr<Radiant_mage> new_mage(new Radiant_mage);
	return new_mage;
}