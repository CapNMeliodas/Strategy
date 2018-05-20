#pragma once
#include "../../../Unit_factory/Unit_factory.h"
#include "../../Adapter.h"
#include <algorithm>

class Dire_horseman_adapter : public Adapter {
public:
	Dire_horseman_adapter(std::shared_ptr<Dire_horseman> _d_horseman) : d_horseman(_d_horseman) {};

	int adapt(std::shared_ptr<Dire_horseman> _d_horseman) {
		get_unit(_d_horseman);
		return po_to_loh();
	}

	void get_unit(std::shared_ptr<Dire_horseman> _d_horseman) {
		d_horseman = _d_horseman;
	}

	int po_to_loh() override {
		int tmp = (radiant_heal_power * (d_horseman->get_amplification() / 2));
		return std::max(1, tmp);
	}
protected:
	std::shared_ptr<Dire_horseman> d_horseman;
};
