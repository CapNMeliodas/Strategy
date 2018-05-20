#pragma once
#include "../Game.h"

//Базовый класс
class Command {
public:
	virtual ~Command() {}
	virtual void execute() = 0;
protected:
	Command(Game* p) : pgame(p) {}
	Game* pgame;
};

class CreateGameCommand : public Command {
public:
	CreateGameCommand(Game* p) : Command(p) {}
	void execute() {
		pgame->create_game();
	}
};

class MakeMoveCommand : public Command {
public:
	MakeMoveCommand(Game* p) : Command(p) {}
	void execute() {
		int doing = 0;
		std::cin >> doing;
		pgame->make_move(doing);
	}
};

class SaveGameCommand : public Command {
public:
	SaveGameCommand(Game* p) : Command(p) {}
	void execute() {
		pgame->save_game();
	}

};

class UndoCommand : public Command {
public:
	UndoCommand(Game* p) : Command(p) {}
	void execute() {
		pgame->load_game();
	}
};