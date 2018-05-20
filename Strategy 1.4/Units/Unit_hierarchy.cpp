#pragma once
#include "Unit_hierarchy.h"

Knight::Knight(int _shield_armor, bool _is_shielded, int _couldown) {
	shield_armor =_shield_armor;
	is_shielded = _is_shielded;
	shield.ability_couldown = _couldown;
} 

Knight::Knight(int _shield_armor) {
	shield_armor = _shield_armor;
}

void Knight::shield_up() {
	if (!is_shielded){
		defense += shield_armor;
		move.speed -= knights_shield_ms_decrease;
		is_shielded = true;
	}
	else {
		defense -= shield_armor;
		move.speed += knights_shield_ms_decrease;
		is_shielded = false;
	}

	shield.timer = shield.ability_couldown;
};

Archer::Archer(int _attack_range) {
	attack_range = _attack_range;
};


Mage::Mage(int _spell_power, int _couldown, int _mana) {
	spell_power = _spell_power;
	magic_missile.ability_couldown = _couldown;
	mana = _mana;
};


int Mage::cast_magic_missile() {
	mana -= ms_mana;
	magic_missile.timer = magic_missile.ability_couldown;
	return spell_power * basic_magic_missile_mp;
};

Horseman::Horseman(int _acceleration_speed, int _couldown) {
	acceleration_damage = _acceleration_speed;
	acceleration.ability_couldown = _couldown;
};

void Horseman::accelerate() {
	damage += acceleration_damage;
	acceleration.timer = acceleration.ability_couldown;
};

