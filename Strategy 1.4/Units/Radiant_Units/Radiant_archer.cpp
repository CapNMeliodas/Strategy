#include "../Radiant_units/Radiant_archer.h"
#include <iostream>

void Radiant_archer::Representation() {
	std::cout << "Uther archer at your service master!";
}

Radiant_archer::Radiant_archer() : Unit(r_archer_cost, r_archer_health, r_archer_defense, r_archer_damage, r_archer_speed, r_archer_initiative), 
								   Archer(r_archer_range), Radiant(r_archer_heal) {}

int Radiant_archer::lay_on_hands() {
	return radiant_heal_power * heal_power;
}

int Radiant_archer::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += attack_range;
	return sum;
}

void Radiant_archer::up_stats(int param) {
	health += param;
	damage += param;
	defense += param;
	move.speed += param;
};