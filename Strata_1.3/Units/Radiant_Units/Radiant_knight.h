#pragma once
#include "../Radiant.h"
#include "../Unit_hierarchy.h"

class Radiant_knight : protected Radiant, protected Knight {
public:
	Radiant_knight();

	int count_potential() override;
	void Representation() override;
	int lay_on_hands() override;
	void up_stats(int param);
};