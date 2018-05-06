#pragma once
#include "../Unit_factory/Unit_factory.h"

class Adapter {
public:
	virtual int po_to_loh() = 0;
	virtual void loh_to_po() = 0;
};
