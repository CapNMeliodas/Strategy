#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Radiant_horseman_adapter : public Adapter {
public:
	Radiant_horseman_adapter(std::shared_ptr<Radiant_horseman> _r_horseman) : r_horseman(_r_horseman) {};

	void adapt(std::shared_ptr<Radiant_horseman> _r_horseman) {
		get_unit(_r_horseman);
		loh_to_po();
	}

	void get_unit(std::shared_ptr<Radiant_horseman> _r_horseman) {
		r_horseman = _r_horseman;
	}

	void loh_to_po() override {
		int tmp1 = r_horseman->get_heal_power();
		int tmp2 = std::max(1, tmp1 / 2);
		r_horseman->up_stats(tmp2);
	}

protected:
	std::shared_ptr<Radiant_horseman> r_horseman;
};