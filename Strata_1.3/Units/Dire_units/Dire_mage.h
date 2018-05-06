#pragma once
#include "../Dire.h"
#include "../Unit_hierarchy.h"

class Dire_mage : protected Dire, protected Mage {
public:
	Dire_mage();

	int count_potential() override;
	void Representation() override;
	void power_overwhelming() override;
};