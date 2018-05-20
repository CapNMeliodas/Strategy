#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Dire_archer_adapter : public Adapter {
public:
	Dire_archer_adapter() = default;

	int adapt(std::shared_ptr<Dire_archer> _d_archer) {
		get_unit(_d_archer);
		return po_to_loh();
	}

	void get_unit(std::shared_ptr<Dire_archer> _d_archer) {
		d_archer = _d_archer;
	}

	int po_to_loh() override {
		int tmp = (radiant_heal_power * (d_archer->get_amplification() / 2));
		return std::max(1, tmp);
	}

protected:
	std::shared_ptr<Dire_archer> d_archer;
};
