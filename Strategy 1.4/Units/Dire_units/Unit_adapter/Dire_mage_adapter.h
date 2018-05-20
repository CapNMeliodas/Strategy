#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Dire_mage_adapter : public Adapter {
public:
	Dire_mage_adapter(std::shared_ptr<Dire_mage> _d_mage) : d_mage(_d_mage) {};

	int adapt(std::shared_ptr<Dire_mage> _d_mage) {
		get_unit(_d_mage);
		return po_to_loh();
	}

	void get_unit(std::shared_ptr<Dire_mage> _d_mage) {
		d_mage = _d_mage;
	}

	int po_to_loh() override {
		int tmp = (radiant_heal_power * (d_mage->get_amplification() / 2));
		return std::max(1, tmp);
	}
protected:
	std::shared_ptr<Dire_mage> d_mage;
};
