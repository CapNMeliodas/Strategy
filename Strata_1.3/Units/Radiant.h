#pragma once
#include "Unit_hierarchy.h"
#include "../Statistics.h"

class Radiant{
public:
	Radiant(int _heal);
	virtual int lay_on_hands() = 0;
	int get_heal_power();
protected:
	int heal_power = 0;
	bool is_tired = false;
};