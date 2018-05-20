#pragma once
#include "Tavern.h"
#include <memory>

class Builder {
public:
	virtual void set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) = 0;
	virtual void set_dragon_nest(std::shared_ptr<Tavern> tavern) = 0;
	virtual void set_monastery(std::shared_ptr<Tavern> tavern) = 0;
	virtual void set_rest_room(std::shared_ptr<Tavern> tavern) = 0;
	virtual void set_rumors_collectors(std::shared_ptr<Tavern> tavern) = 0;
};

class Tavern_director {
public:
	std::shared_ptr<Tavern> build_base_tavern(Builder*);
};

class Battle_tavern_builder : public Builder{
	void set_dragon_nest(std::shared_ptr<Tavern> tavern) override;
	void set_monastery(std::shared_ptr<Tavern> tavern) override;

	void set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) override;
	void set_rest_room(std::shared_ptr<Tavern> tavern) override;
	void set_rumors_collectors(std::shared_ptr<Tavern> tavern) override;
};

class Balance_tavern_builder : public Builder {
	void set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) override;
	void set_dragon_nest(std::shared_ptr<Tavern> tavern) override;
	void set_monastery(std::shared_ptr<Tavern> tavern) override;

	void set_rest_room(std::shared_ptr<Tavern> tavern) override;
	void set_rumors_collectors(std::shared_ptr<Tavern> tavern) override;
};

class Story_tavern_builder : public Builder {
	void set_rumors_collectors(std::shared_ptr<Tavern> tavern) override;
	void set_rest_room(std::shared_ptr<Tavern> tavern) override;
	void set_alchemy_laboratory(std::shared_ptr<Tavern> tavern) override;
	void set_dragon_nest(std::shared_ptr<Tavern> tavern) override;

	void set_monastery(std::shared_ptr<Tavern> tavern) override;
};