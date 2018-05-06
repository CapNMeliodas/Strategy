#pragma once
#include "Unit.h"

Unit::Unit(int _cost, int _health, int _defense, int _damage, int _speed, int _initiative) {
	cost = _cost;
	health = _health;
	defense = _defense;
	damage = _damage;
	move.speed =_speed;
	move.initiative = _initiative;
}

