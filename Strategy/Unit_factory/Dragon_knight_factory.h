#pragma once
#include "Unit_factory.h"

class Dragon_knight_factory : public Unit_factory {
	Dragon_knight_factory();

	std::shared_ptr<Unit> Create_unit() override;
};