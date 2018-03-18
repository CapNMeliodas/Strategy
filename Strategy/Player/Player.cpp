#pragma once
#include <iostream>
#include "Player.h"
#include <algorithm>

Player::Player(int _level, int _cur_exp, int _leadership, int _gold, int _mana, int _rage) : 
	level(_level), cur_exp(_cur_exp), leadership(_leadership), gold_bag(_gold), manapool(_mana), rage(_rage) {};

void Player::Show_stats() {
	std::cout << "Hero bag and stats : " << std::endl;
	std::cout << "\tlevel: " << level << "\n\tcur_exp: " << cur_exp << "/" << level * 200 << "\n\t leadership: " << 
		leadership << "\n\tgold: " << gold_bag << "\n\tmanapool: " << manapool << "\n\trage: " << rage << std::endl;

};

void Player::Show_army() {

};

int Player::Get_gold() {
	return gold_bag;
};

void Player::Give_gold(int cost) {
	gold_bag -= cost;
};

int Player::Get_leadetship() {
	return leadership;
};

int Player::Possible_amount(int count, std::shared_ptr<Unit> unit_type) {
	int possible_amount = 0;
	possible_amount = std::min(gold_bag / unit_type->cost, leadership / unit_type->leadership_cost);
	std::cout << "You can buy: " << possible_amount << std::endl;
	return possible_amount;
};


