#pragma once
#include "Unit.h"
#include "../Statistics.h"

struct ability_user {
	int ability_couldown = 1;
	int timer = 0;
};

class Knight : virtual protected Unit {
protected:
	int shield_armor = 0;
	bool is_shielded = false;
	ability_user shield;
public:
	//int count_potential();
	Knight(int _shield_armor, bool _is_shielded, int _couldown);
	Knight(int _shield_armor);
	void shield_up();
};

class Archer : virtual protected Unit {
protected:
	int attack_range = 0;
public:
	//int count_potential();
	Archer(int _attack_range);
};

class Mage : virtual protected Unit {
protected:
	int spell_power = 0;
	int mana = 0;
	ability_user magic_missile;
public:
	//int count_potential();
	Mage(int _spell_power, int _couldown, int _mana);
	int cast_magic_missile();
};

class Horseman : virtual protected Unit {
protected:
	int acceleration_damage	= 0;
	ability_user acceleration;
public:
	//int count_potential();
	Horseman(int _acceleration_speed, int _couldown);
	void accelerate();
};