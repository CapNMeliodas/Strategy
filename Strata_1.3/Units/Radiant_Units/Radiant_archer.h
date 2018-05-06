#pragma once
#include "../Radiant.h"
#include "../Unit_hierarchy.h"

class Radiant_archer : protected Radiant, protected Archer {
public:
	Radiant_archer();

	int count_potential() override;
	void Representation() override;
	int lay_on_hands() override;
	void up_stats(int param);
};