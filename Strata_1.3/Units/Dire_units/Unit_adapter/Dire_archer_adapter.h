#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Dire_archer_adapter : public Adapter {
public:
	Dire_archer_adapter(std::shared_ptr<Dire_archer> _d_archer) : d_archer(_d_archer) {};

	int po_to_loh() override {
		int tmp = (radiant_heal_power * (d_archer->get_amplification / 2));
		return std::max(1, tmp);
	}
protected:
	std::shared_ptr<Dire_archer> d_archer;
};
