#pragma once
#include "../Radiant.h"
#include "../Unit_hierarchy.h"

class Radiant_mage : protected Radiant, protected Mage {
public:
	Radiant_mage();

	int count_potential() override;
	void Representation() override;
	int lay_on_hands() override;
	void up_stats(int param);
};