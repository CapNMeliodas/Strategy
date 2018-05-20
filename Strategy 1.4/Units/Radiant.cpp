#include "Radiant.h"

Radiant::Radiant(int _heal) {
	heal_power = radiant_heal_power;
}

int Radiant::get_heal_power() {
	return heal_power;
};
