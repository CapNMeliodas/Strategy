#pragma once
#include "Unit_hierarchy.h"
#include <vector>
#include <memory>

class Player {
public:
	Player(int _leadership, int _gold, int _mana, int _rage, int _level, int _cur_exp);

	void Show_stats();
	void Show_army();
	int Get_gold();
	void Give_gold(int cost);
	int Get_leadetship();
	int Possible_amount(int count, std::shared_ptr<Unit> unit_type);

private:
	int level;
	int cur_exp;
	int leadership;
	int gold_bag;
	int manapool;
	int rage;
	std::vector<std::vector<std::shared_ptr<Unit>>> army;
};
