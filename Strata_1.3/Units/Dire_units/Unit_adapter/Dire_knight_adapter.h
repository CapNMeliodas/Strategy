#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Dire_knight_adapter : public Adapter {
public:
	Dire_knight_adapter(std::shared_ptr<Dire_knight> _d_knight) : d_knight(_d_knight) {};

	int po_to_loh() override {
		int tmp = (radiant_heal_power * (d_knight->get_amplification / 2));
		return std::max(1, tmp);
	}
protected:
	std::shared_ptr<Dire_knight> d_knight;
};
