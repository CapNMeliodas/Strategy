#pragma once
#include <iostream>
#include "Player.h"
#include <algorithm>
#include <iostream>

Player::Player(int _level, int _gold, int _mana) :
	level(_level), gold_bag(_gold), manapool(_mana) {};
	

void Player::Show_stats() {
	std::cout << "Hero bag and stats : " << std::endl;
	std::cout << "\tlevel: " << level << "\n\tcur_exp: " << cur_exp << "/200" << "\n\tgold: " << gold_bag << "\n\tmanapool: " << manapool << std::endl;
};

int Player::Get_gold() {
	return gold_bag;
};

void Player::Give_gold(int cost) {
	gold_bag -= cost;
};

void Player::count_potintial() {
	std::cout << army.count_potential() << std::endl;
}
