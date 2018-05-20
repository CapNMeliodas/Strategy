#pragma once
#include "Unit_factory.h"

class Radiant_unit_factory : public Unit_factory {
public:
	std::shared_ptr<Radiant_archer> create_r_Archer() override;
	std::shared_ptr<Radiant_horseman> create_r_Horseman() override;
	std::shared_ptr<Radiant_knight> create_r_Knight() override;
	std::shared_ptr<Radiant_mage> create_r_Mage() override;

	std::shared_ptr<Dire_archer> create_d_Archer() override { return nullptr; };
	std::shared_ptr<Dire_horseman> create_d_Horseman() override { return nullptr; };
	std::shared_ptr<Dire_knight> create_d_Knight() override { return nullptr; };
	std::shared_ptr<Dire_mage> create_d_Mage() override { return nullptr; };
};