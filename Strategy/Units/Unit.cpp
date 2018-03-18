#pragma once
#include "Unit.h"

Unit::Unit(int _cost, int _leadership_cost, int _health, int _defense, int _fire_resistance,
	int _cold_resistance, int _lightning_resistance, int _earth_resistance, int _speed, int _initiative, bool _is_flying, int _id_type):
	cost(_cost), leadership_cost(_leadership_cost), health(_health), defense(_defense), fire_resistance(_fire_resistance),
	cold_resistance(_cold_resistance), lightning_resistance(_lightning_resistance), earth_resistance(_earth_resistance),
	move({ _speed, _initiative, _is_flying }), id_type(_id_type) {}
