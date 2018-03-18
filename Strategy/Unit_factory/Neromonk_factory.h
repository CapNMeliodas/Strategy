#pragma once
#include "Unit_factory.h"

class Neromonk_factory : public Unit_factory {
	Neromonk_factory();

	std::shared_ptr<Unit> Create_unit() override;
};