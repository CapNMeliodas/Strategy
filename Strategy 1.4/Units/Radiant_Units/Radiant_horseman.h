#pragma once
#include "../Radiant.h"
#include "../Unit_hierarchy.h"

class Radiant_horseman : public Radiant, protected Horseman {
public:
	Radiant_horseman();

	int count_potential() override;
	void Representation() override;
	int lay_on_hands() override;
	void up_stats(int param);
};