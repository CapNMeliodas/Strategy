#pragma once

struct moving {
	int speed;
	int initiative;
	bool is_flying;
};

class Unit {
public:
	int cost;
	int leadership_cost;
	int health;
	moving move;
	int defense;
	int fire_resistance;
	int cold_resistance;
	int lightning_resistance;
	int earth_resistance;
	int id_type;

	Unit() = default;

	Unit(int _cost, int _leadership_cost, int _health, int _defense, int _fire_resistance,
		int _cold_resistance, int _lightning_resistance, int _earth_resistance, int _speed, int _initiative, bool _is_flying, int _id_type);

	virtual void Representation() const = 0;
};
