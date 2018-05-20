#include "../Radiant_units/Radiant_horseman.h"
#include <iostream>

void Radiant_horseman::Representation() {
	std::cout << "Uther horseman at your service master!";
}

Radiant_horseman::Radiant_horseman() : Unit(r_horseman_cost, r_horseman_health, r_horseman_defense, r_horseman_damage, r_horseman_speed, r_horseman_initiative),
Horseman(r_horseman_ac_damage, r_horseman_ac_could), Radiant(r_horseman_heal) {}

int Radiant_horseman::lay_on_hands() {
	return radiant_heal_power * heal_power;
}

int Radiant_horseman::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += acceleration_damage;
	return sum;
}

void Radiant_horseman::up_stats(int param) {
	health += param;
	damage += param;
	defense += param;
	move.speed += param;
};