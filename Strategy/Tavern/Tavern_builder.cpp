#pragma once
#include "Tavern_builder.h"
#include <memory>

std::shared_ptr<Tavern> Tavern_director::build_base_tavern(Builder* builder) {
	std::shared_ptr<Tavern> new_tavern(new Tavern);
	builder->set_archer_tower(new_tavern);
	builder->set_alchemy_laboratory(new_tavern);
	builder->set_dragon_nest(new_tavern);
	builder->set_monastery(new_tavern);
	builder->set_rest_room(new_tavern);
	builder->set_rumors_collectors(new_tavern);
	return new_tavern;
};

void Battle_tavern_builder::set_archer_tower(std::shared_ptr<Tavern> tavern) {
	tavern->archer_tower_lvl = 1;
}
void Battle_tavern_builder::set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) {
	tavern->alchemy_laboratory_lvl = 0;
}
void Battle_tavern_builder::set_dragon_nest(std::shared_ptr<Tavern> tavern) {
	tavern->dragon_nest_lvl = 1;
}
void Battle_tavern_builder::set_monastery(std::shared_ptr<Tavern> tavern) {
	tavern->monastery_lvl = 1;
}
void Battle_tavern_builder::set_rest_room(std::shared_ptr<Tavern> tavern) {
	tavern->rest_room = false;
}
void Battle_tavern_builder::set_rumors_collectors(std::shared_ptr<Tavern> tavern) {
	tavern->rumors_collectors = false;
}

void Story_tavern_builder::set_archer_tower(std::shared_ptr<Tavern> tavern) {
	tavern->archer_tower_lvl = 0;
}
void Story_tavern_builder::set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) {
	tavern->alchemy_laboratory_lvl = 1;
}
void Story_tavern_builder::set_dragon_nest(std::shared_ptr<Tavern> tavern) {
	tavern->dragon_nest_lvl = 1;
}
void Story_tavern_builder::set_monastery(std::shared_ptr<Tavern> tavern) {
	tavern->monastery_lvl = 0;
}
void Story_tavern_builder::set_rest_room(std::shared_ptr<Tavern> tavern) {
	tavern->rest_room = true;
}
void Story_tavern_builder::set_rumors_collectors(std::shared_ptr<Tavern> tavern) {
	tavern->rumors_collectors = true;
}

void Balance_tavern_builder::set_archer_tower(std::shared_ptr<Tavern> tavern) {
	tavern->archer_tower_lvl = 0;
}
void Balance_tavern_builder::set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) {
	tavern->alchemy_laboratory_lvl = 1;
}
void Balance_tavern_builder::set_dragon_nest(std::shared_ptr<Tavern> tavern) {
	tavern->dragon_nest_lvl = 1;
}
void Balance_tavern_builder::set_monastery(std::shared_ptr<Tavern> tavern) {
	tavern->monastery_lvl = 1;
}
void Balance_tavern_builder::set_rest_room(std::shared_ptr<Tavern> tavern) {
	tavern->rest_room = false;
}
void Balance_tavern_builder::set_rumors_collectors(std::shared_ptr<Tavern> tavern) {
	tavern->rumors_collectors = false;
}