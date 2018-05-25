#include "Dire_knight.h"
#include <iostream>

void Dire_knight::Representation() {
	std::cout << "Ner'Zul knight at your service master!";
}

Dire_knight::Dire_knight() : Unit(d_knight_cost, d_knight_health, d_knight_defense, d_knight_damage, d_knight_speed, d_knight_initiative),
Knight(d_knight_sh_defense), Dire(d_knight_amplification) {}


void Dire_knight::power_overwhelming() {
	health += amplification;
	damage += amplification;
	defense += amplification;
	move.speed += amplification;
}

int Dire_knight::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 2 * shield_armor;
	return sum;
}