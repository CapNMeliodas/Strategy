#pragma once
#include "Base_playble_obj.h"
#include <iostream>

class Decorator : public Base_playble_obj {
	Base_playble_obj *obj;
public:
	Decorator(Base_playble_obj *o) {
		obj = o;
	}

	void count_potintial() override;
};

class NPC_from_player : public Decorator {
public:
	NPC_from_player(Base_playble_obj *o) : Decorator(o) {}

	void NPC_logic();
	void attend_palyer();
};
