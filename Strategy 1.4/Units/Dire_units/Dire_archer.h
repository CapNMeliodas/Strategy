#pragma once
#include "../Dire.h"
#include "../Unit_hierarchy.h"

class Dire_archer : public Dire, protected Archer{
public:
	Dire_archer();

	int count_potential() override;
	void Representation() override;
	void power_overwhelming() override;
};
