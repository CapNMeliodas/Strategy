#pragma once
#include "Unit_factory.h"

class Peaceful_alchemist_factory : public Unit_factory {
	Peaceful_alchemist_factory();

	std::shared_ptr<Unit> Create_unit() override;
};