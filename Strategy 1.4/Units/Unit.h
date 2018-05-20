#pragma once

struct moving {
	int speed = 0;
	int initiative = 0;
};

class Unit {
protected:
	int cost = 0;
	int health = 0;
	moving move;
	int damage = 0;
	int defense = 0;

public:
	Unit() = default;

	Unit(int _cost, int _health, int _defense, int _damage,  int _speed, int _initiative);

	virtual int count_potential() = 0;
	virtual void Representation() = 0;
};
