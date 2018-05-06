#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Radiant_archer_adapter : public Adapter {
public:
	Radiant_archer_adapter(std::shared_ptr<Radiant_archer> _r_archer) : r_archer(_r_archer) {};

	void loh_to_po() override {
		int tmp1 = r_archer->get_heal_power;
		int tmp2 = std::max(1, tmp1 / 2);
		r_archer->up_stats(tmp2);
	}

protected:
	std::shared_ptr<Radiant_archer> r_archer;
};
