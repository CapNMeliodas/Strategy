#include "Game.h"
#include "string"

using namespace std;

void Game::make_move(int variant) {
	if (variant == 1) {
		Main_player->gold_bag += rand() % 200;
		return;
	}
	else if (variant == 2) {
		int encounter = rand() % 2;
		if (encounter == 0) {
			cout << "You find a beautiful fishwoman! Would you kiss her? Yes/No" << endl;
			string answer = "a";
			cin >> answer;
			if (answer == "Yes" || answer == "yes") {
				cout << "You are energise with magic energy!\n" << "Buff: +20 manapool" << endl;
				Main_player->manapool += 20;
			}
			else if (answer == "No" || answer == "no" || answer == "yesn't") {
				cout << "Fock you, asshole! Now you have a curse of!\n" << "Curse: -20 manapool" << endl;
				Main_player->manapool = max(0, Main_player->manapool - 20);
			}
		}
		if (encounter == 1) {
			cout << "You find a Tod Howard! He is porting Skyrim in his microwave! Would you ask him to stop and make new TES? Yes/ No" << endl;
			string answer = "a";
			cin >> answer;
			if (answer == "Yes" || answer == "yes") {
				cout << "You are a brave hero of community! Get extra donations from subs!\n" << "Get: +300 gold" << endl;
				Main_player->gold_bag += 300;
			}
			else if (answer == "No" || answer == "no" || answer == "yesn't") {
				cout << "You are a heartless monster that don't want to stop it!\n" << "Loss: -200 gold" << endl;
				Main_player->gold_bag = max(0, Main_player->Get_gold() - 200);
			}
		}
	}
}

void Game::create_game() {
	//Создаем ирока и фабрики для создания юнитов
	Main_player = shared_ptr<Player> (new Player(1, 1000, 100)); //уровень, золото, мана
	DUF = shared_ptr<Dire_unit_factory>(new Dire_unit_factory);
	RUF = shared_ptr<Radiant_unit_factory>(new Radiant_unit_factory);


	cout << "Welcome brave stranger! Get yout army and prepare to battle!" << endl;
	cout << "As you see we have here a: Battle(1)/ Balance(2)/ Story(3) ---- tavern" << endl;

	//С помощью builder создаем таверну
	Tavern_director director;
	//tavern = nullptr;

	int tavern_type = 0;
	while (true) {
		cin >> tavern_type;
		if (tavern_type == 1) {
			Battle_tavern_builder* builder = new Battle_tavern_builder;
			tavern = director.build_base_tavern(builder);
			delete builder;
			cout << "You are are a battle-guy!" << endl;
			break;
		}
		else if (tavern_type == 2) {
			Balance_tavern_builder* builder = new Balance_tavern_builder;
			tavern = director.build_base_tavern(builder);
			delete builder;
			cout << "Balance in all things!" << endl;
			break;
		}
		else if (tavern_type == 3) {
			Story_tavern_builder* builder = new Story_tavern_builder;
			tavern = director.build_base_tavern(builder);
			delete builder;
			cout << "You are pretty calm!" << endl;
			break;
		}
		else {
			cout << "Wrong choice, Sir!" << endl;
		}
	}

	//Нанимаем армию
	cout << "Radiant archer: " << r_archer_cost << "\nRadiant horseman: " << r_horseman_cost << "\nRadiant knight: " << r_knight_cost << "\nRadiant mage: " << r_mage_cost << endl;


	while (true) {
		int arch_num = 0;
		int hors_num = 0;
		int knig_num = 0;
		int mage_num = 0;
		cin >> arch_num >> hors_num >> knig_num >> mage_num;
		int cost = 0;
		cost = r_archer_cost * arch_num + r_horseman_cost * hors_num + r_knight_cost * knig_num + r_mage_cost * mage_num;
		if (cost > Main_player->Get_gold()) {
			cout << "Not enought money!" << endl;
		}
		else {
			Main_player->Give_gold(cost);
			for (int i = 0; i < arch_num; ++i) {
				Main_player->army.r_Archers.push_back(RUF->create_r_Archer());
			}
			for (int i = 0; i < hors_num; ++i) {
				Main_player->army.r_Horsemen.push_back(RUF->create_r_Horseman());
			}
			for (int i = 0; i < knig_num; ++i) {
				Main_player->army.r_Knights.push_back(RUF->create_r_Knight());
			}
			for (int i = 0; i < mage_num; ++i) {
				Main_player->army.r_Mages.push_back(RUF->create_r_Mage());
			}
			cout << "Army is ready, Sir!" << endl;
			break;
		}
	}

	//Создаем противоположную армию
	opponent = shared_ptr<Player> (new Player(1, 700, 100));
	int d_ar_num = 0;
	int d_ho_num = 0;
	int d_kn_num = 0;
	int d_ma_num = 0;
	d_ar_num = rand() % 3 + 1;
	d_ho_num = rand() % 3 + 1;
	d_kn_num = rand() % 3 + 1;
	d_ma_num = rand() % 3 + 1;


	for (int i = 0; i < d_ar_num; ++i) {
		opponent->army.d_Archers.push_back(DUF->create_d_Archer());
	}
	for (int i = 0; i < d_ho_num; ++i) {
		opponent->army.d_Horsemen.push_back(DUF->create_d_Horseman());
	}
	for (int i = 0; i < d_kn_num; ++i) {
		opponent->army.d_Knights.push_back(DUF->create_d_Knight());
	}
	for (int i = 0; i < d_ma_num; ++i) {
		opponent->army.d_Mages.push_back(DUF->create_d_Mage());
	}

	cout << "Your opponent is prepared too! Be careful" << endl;
	return;
}

void Game::save_game() {
	state save = { *Main_player, *opponent, *tavern };
	saver->states.push_back(save);
}

void Game::load_game() {
	if (!saver->states.empty()) {
		saver->current_save = (saver->states[saver->states.size() - 1]);
		saver->states.pop_back();
		Main_player = shared_ptr<Player> (&saver->current_save.Main_player);
		opponent = shared_ptr<Player>(&saver->current_save.opponent);
		tavern = shared_ptr<Tavern>(&saver->current_save.tavern);
	}
}