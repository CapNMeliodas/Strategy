#pragma once
#include "Unit_hierarchy.h"

Offensive::Offensive(int _damage, int _attack_range, std::string _damage_type) : attack({ _damage, _attack_range, _damage_type }) {};

Range::Range(int _distance_fine) : distance_fine(_distance_fine) {};

Melee::Melee(int _bonus_defense, int _bonus_resistance, int _bonus_moves) : bonus_defense(_bonus_defense),
	bonus_resistance(_bonus_resistance),bonus_moves(_bonus_moves) {};

Supportive::Supportive(int _ability_range, int _ability_power) : ability_range(_ability_power), ability_power(_ability_power) {};