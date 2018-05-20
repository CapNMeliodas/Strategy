#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Radiant_mage_adapter : public Adapter {
public:
	Radiant_mage_adapter(std::shared_ptr<Radiant_mage> _r_mage) : r_mage(_r_mage) {};

	void adapt(std::shared_ptr<Radiant_mage> _r_mage) {
		get_unit(_r_mage);
		loh_to_po();
	}

	void get_unit(std::shared_ptr<Radiant_mage> _r_mage) {
		r_mage = _r_mage;
	}

	void loh_to_po() override {
		int tmp1 = r_mage->get_heal_power();
		int tmp2 = std::max(1, tmp1 / 2);
		r_mage->up_stats(tmp2);
	}

protected:
	std::shared_ptr<Radiant_mage> r_mage;
};