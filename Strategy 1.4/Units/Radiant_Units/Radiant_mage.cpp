#include "../Radiant_units/Radiant_mage.h"
#include <iostream>

void Radiant_mage::Representation() {
	std::cout << "Uther mage at your service master!";
}

Radiant_mage::Radiant_mage() : Unit(r_mage_cost, r_mage_health, r_mage_defense, r_mage_damage, r_mage_speed, r_mage_initiative),
Mage(r_mage_spell_power, r_mage_ms_could, r_mage_mana), Radiant(r_mage_heal) {}

int Radiant_mage::lay_on_hands() {
	return radiant_heal_power * heal_power;
}

int Radiant_mage::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 3 * spell_power;
	return sum;
}

void Radiant_mage::up_stats(int param) {
	health += param;
	damage += param;
	defense += param;
	move.speed += param;
};