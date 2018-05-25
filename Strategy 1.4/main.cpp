#pragma once
#include "Units/Unit_hierarchy.h"
#include "Unit_factory/Radiant_unit_factory.h"
#include "Unit_factory/Dire_unit_factory.h"
#include "Adapter_includer.h"
#include "Tavern/Tavern_builder.h"
#include "Player and Army\Player.h"
#include "Player and Army\Army.h"
#include "NPC/Decorator.h"
#include "Game.h"
#include "Command/Command.h"
#include "Memento/Memento.h"

using namespace std;

int main() {
	Memento saves;
	Game game(& saves);

	vector<Command*> v;
	v.push_back(new CreateGameCommand(&game));
	v.push_back(new SaveGameCommand(&game));

	//Одна холостая итерация
	for (int i = 0; i < v.size(); ++i) {
		v[i]->execute();
	}

	for (int i = 0; i < v.size(); ++i) {
		delete v[i];
	}
	v.resize(0);
	//
	

	while (true) {
		cout << "Move On or Save or Undo if possible? 1/2/3" << endl;
		int step = 0;
		cin >> step;
		if (step == 1) {
			v.push_back(new MakeMoveCommand(&game));
		}
		else if (step == 2) {
			v.push_back(new SaveGameCommand(&game));
		}
		else if (step == 3) {
			v.push_back(new UndoCommand(&game));
		}
		else {
			cout << "Can't do that!" << endl;
		}


		for (int i = 0; i < v.size(); ++i) {
			v[i]->execute();
		}

		for (int i = 0; i < v.size(); ++i) {
			delete v[i];
		}
		
		v.resize(0);
	}
	
	system("pause");
	return 0;
}