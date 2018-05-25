#pragma once
#include "Units/Unit_hierarchy.h"
#include "Unit_factory/Radiant_unit_factory.h"
#include "Unit_factory/Dire_unit_factory.h"
#include "Adapter_includer.h"
#include "Tavern/Tavern_builder.h"
#include "Player and Army\Player.h"
#include "Player and Army\Army.h"
#include "NPC/Decorator.h"
#include "Memento/Memento.h"

class Game {
public:
	Game(Memento* _saver) {
		saver = _saver;
	};

	void create_game();
	void make_move(int variant);
	void save_game();
	void load_game();

	std::shared_ptr<Player> Main_player;
	std::shared_ptr<Player> opponent;
	std::shared_ptr<Dire_unit_factory> DUF;
	std::shared_ptr<Radiant_unit_factory> RUF;
	std::shared_ptr<Tavern> tavern;
	Memento* saver;
};