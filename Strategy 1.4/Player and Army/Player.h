#pragma once
#include "Army.h"
#include <vector>
#include <memory>
#include "../NPC/Base_playble_obj.h"

// ќсновной класс, использующий отношение "€вл€етс€"
class Player : public Base_playble_obj{
public:
	Player() = default;
	Player(int _level, int _gold, int _manapool);

	void Show_stats();
	int Get_gold();
	void Give_gold(int cost);
	void count_potintial() override;

	int level;
	int cur_exp = 0;
	int gold_bag;
	int manapool;

	Army army;
};
