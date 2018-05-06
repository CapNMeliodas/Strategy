#pragma once
#include "Unit_factory.h"

class Radiant_unit_factory : public Unit_factory {
public:
	std::shared_ptr<Radiant_archer> create_r_Archer() override;
	std::shared_ptr<Radiant_horseman> create_r_Horseman() override;
	std::shared_ptr<Radiant_knight> create_r_Knight() override;
	std::shared_ptr<Radiant_mage> create_r_Mage() override;
};