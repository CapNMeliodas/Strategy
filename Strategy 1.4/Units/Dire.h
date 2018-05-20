#pragma once
#include "Unit_hierarchy.h"
#include "../Statistics.h"

class Dire{
public:
	Dire(int _amplification);
	virtual void power_overwhelming() = 0;
	int get_amplification();
protected:
	int amplification = 0;
	bool is_tired = false;
};