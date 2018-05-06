#include "../Dire_units/Dire_mage.h"
#include <iostream>

void Dire_mage::Representation() {
	std::cout << "Ner'Zul mage at your service master!";
}

Dire_mage::Dire_mage() : Unit(d_mage_cost, d_mage_health, d_mage_defense, d_mage_damage, d_mage_speed, d_mage_initiative),
Mage(d_mage_spell_power, d_mage_ms_could, d_mage_mana), Dire(d_mage_amplification) {}

void Dire_mage::power_overwhelming() {
	health += amplification;
	damage += amplification;
	defense += amplification;
	move.speed += amplification;
}

int Dire_mage::count_potential() {
	int sum = 0;
	sum += health;
	sum += damage;
	sum += 3 * spell_power;
return sum;
}