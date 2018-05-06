#pragma once
#include "../Dire.h"
#include "../Unit_hierarchy.h"

class Dire_horseman : protected Dire, protected Horseman {
public:
	Dire_horseman();

	int count_potential() override;
	void Representation() override;
	void power_overwhelming() override;
};