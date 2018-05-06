#include "../Radiant_units/Radiant_knight.h"
#include <iostream>

void Radiant_knight::Representation() {
	std::cout << "Uther knight at your service master!";
}

Radiant_knight::Radiant_knight() : Unit(r_knight_cost, r_knight_health, r_knight_defense, r_knight_damage, r_knight_speed, r_knight_initiative),
Knight(r_knight_sh_defense), Radiant(r_knight_heal) {}

int Radiant_knight::lay_on_hands() {
	return radiant_heal_power * heal_power;
}

int Radiant_knight::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 2 * shield_armor;
	return sum;
}

void Radiant_knight::up_stats(int param) {
	health += param;
	damage += param;
	defense += param;
	move.speed += param;
};