#pragma once
#include "../Dire.h"
#include "../Unit_hierarchy.h"

class Dire_knight : protected Dire, protected Knight {
public:
	Dire_knight();

	int count_potential() override;
	void power_overwhelming() override;
	void Representation() override;
};