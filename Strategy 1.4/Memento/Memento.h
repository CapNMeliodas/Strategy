#pragma once
#include <vector>
#include <memory>
#include "../Tavern/Tavern_builder.h"
#include "../Player and Army\Player.h"
#include "../Player and Army/Army.h"


struct state{
	Player Main_player;
	Player opponent;
	Tavern tavern;
};

class Memento {
public:
	Memento() = default;

	Memento(state val) {
		states.push_back(val);
	}

	state current_save;
	std::vector<state> states;
};