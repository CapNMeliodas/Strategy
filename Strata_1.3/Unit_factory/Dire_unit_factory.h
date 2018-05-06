#pragma once
#include "Unit_factory.h"

class Dire_unit_factory : public Unit_factory{
public:
	std::shared_ptr<Dire_archer> create_d_Archer() override;
	std::shared_ptr<Dire_horseman> create_d_Horseman() override;
	std::shared_ptr<Dire_knight> create_d_Knight() override;
	std::shared_ptr<Dire_mage> create_d_Mage() override;
};