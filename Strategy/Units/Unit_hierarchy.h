#pragma once
#include <string>
#include "Unit.h"

const int archer_type = 1;
const int peaceful_alchemist_type = 2;
const int dragon_knight_type = 3;
const int neromonk_type = 4;


struct attack {
public:
	int damage;
	int attack_range;
	std::string damage_type;
};

class Supportive : virtual public Unit {
public:
	int ability_range;
	int ability_power;

	Supportive(int _ability_range, int _ability_power);
};

class Offensive : virtual public Unit {
public:
	attack attack;

	Offensive(int _damage, int _attack_range, std::string damage_type);
};

class Range : virtual public Offensive {
public:
	int distance_fine;

	Range(int _distance_fine);
};

class Melee : virtual public Offensive {
public:
	int bonus_defense;
	int bonus_resistance;
	int bonus_moves;

	Melee(int _bonus_defense, int _bonus_resistance, int _bonus_moves);
};