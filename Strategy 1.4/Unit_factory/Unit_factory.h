#pragma once
#include "../Units/Unit_hierarchy.h"
#include "../Units/Dire_units/Dire_archer.h"
#include "../Units/Dire_units/Dire_horseman.h"
#include "../Units/Dire_units/Dire_knight.h"
#include "../Units/Dire_units/Dire_mage.h"
#include "../Units/Radiant_Units/Radiant_archer.h"
#include "../Units/Radiant_Units/Radiant_horseman.h"
#include "../Units/Radiant_Units/Radiant_knight.h"
#include "../Units/Radiant_Units/Radiant_mage.h"
#include <memory>

class Unit_factory {
public:
	virtual std::shared_ptr<Radiant_archer> create_r_Archer() = 0;
	virtual std::shared_ptr<Radiant_horseman> create_r_Horseman() = 0;
	virtual std::shared_ptr<Radiant_knight> create_r_Knight() = 0;
	virtual std::shared_ptr<Radiant_mage> create_r_Mage() = 0;

	virtual std::shared_ptr<Dire_archer> create_d_Archer() = 0;
	virtual std::shared_ptr<Dire_horseman> create_d_Horseman() = 0;
	virtual std::shared_ptr<Dire_knight> create_d_Knight() = 0;
	virtual std::shared_ptr<Dire_mage> create_d_Mage() = 0;
};