#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Radiant_knight_adapter : public Adapter {
public:
	Radiant_knight_adapter(std::shared_ptr<Radiant_knight> _r_knight) : r_knight(_r_knight) {};

	void adapt(std::shared_ptr<Radiant_knight> _r_knight) {
		get_unit(_r_knight);
		loh_to_po();
	}

	void get_unit(std::shared_ptr<Radiant_knight> _r_knight) {
		r_knight = _r_knight;
	}

	void loh_to_po() override {
		int tmp1 = r_knight->get_heal_power();
		int tmp2 = std::max(1, tmp1 / 2);
		r_knight->up_stats(tmp2);
	}

protected:
	std::shared_ptr<Radiant_knight> r_knight;
};