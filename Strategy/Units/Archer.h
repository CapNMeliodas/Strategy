#pragma once
#include "Unit_hierarchy.h"

class Archer : public Range {
public:
	Archer();

	void Representation() const override;
};
