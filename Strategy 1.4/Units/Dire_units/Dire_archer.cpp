#include "../Dire_units/Dire_archer.h"
#include <iostream>

void Dire_archer::Representation() {
	std::cout << "Ner'Zul archer at your service master!";
}

Dire_archer::Dire_archer() : Unit(d_archer_cost, d_archer_health, d_archer_defense, d_archer_damage, d_archer_speed, d_archer_initiative),
Archer(d_archer_range), Dire(d_archer_amplification) {}

void Dire_archer::power_overwhelming() {
	health += amplification;
	damage += amplification;
	defense += amplification;
	move.speed += amplification;
}

int Dire_archer::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += attack_range;
	return sum;
}