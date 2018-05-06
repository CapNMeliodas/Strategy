#include "../Dire_units/Dire_horseman.h"
#include <iostream>

void Dire_horseman::Representation() {
	std::cout << "Ner'Zul horseman at your service master!";
}

Dire_horseman::Dire_horseman() : Unit(d_horseman_cost, d_horseman_health, d_horseman_defense, d_horseman_damage, d_horseman_speed, d_horseman_initiative),
Horseman(d_horseman_ac_damage, d_horseman_ac_could), Dire(d_horseman_amplification) {}

void Dire_horseman::power_overwhelming() {
	health += amplification;
	damage += amplification;
	defense += amplification;
	move.speed += amplification;
}

int Dire_horseman::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += acceleration_damage;
	return sum;
}