#pragma once
#include "../Units/Unit_hierarchy.h"
#include "../Unit_factory/Unit_factory.h"
#include <memory>
#include <vector>

class Army {
public:
	Army();
	std::vector<std::shared_ptr<Radiant_archer>> r_Archers;
	std::vector<std::shared_ptr<Radiant_horseman>> r_Horsemen;
	std::vector<std::shared_ptr<Radiant_knight>> r_Knights;
	std::vector<std::shared_ptr<Radiant_mage>> r_Mages;

	std::vector<std::shared_ptr<Dire_archer>> d_Archers;
	std::vector<std::shared_ptr<Dire_horseman>> d_Horsemen;
	std::vector<std::shared_ptr<Dire_knight>> d_Knights;
	std::vector<std::shared_ptr<Dire_mage>> d_Mages;

	int count_potential();
};