#pragma once
#include "Unit_factory.h"

class Archer_factory : public Unit_factory {
	Archer_factory() = default;
	~Archer_factory() = default;

	std::shared_ptr<Unit> Create_unit() override;
};