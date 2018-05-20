#pragma once
#include "Tavern_builder.h"
#include <string>

class Tavern {
public:
	Tavern() = default;
	int alchemy_laboratory_lvl;
	int dragon_nest_lvl;
	int monastery_lvl;
	bool rest_room;
	bool rumors_collectors;
};