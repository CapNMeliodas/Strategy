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

/*int Knight::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 2 * shield_armor;
	return sum;
}*/

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

/*int Archer::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += attack_range;
	return sum;
}*/

Mage::Mage(int _spell_power, int _couldown, int _mana) {
	spell_power = _spell_power;
	magic_missile.ability_couldown = _couldown;
	mana = _mana;
};

/*int Mage::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 3 * spell_power;
	return sum;
}*/

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

/*int Horseman::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += acceleration_damage;
	return sum;
}*/