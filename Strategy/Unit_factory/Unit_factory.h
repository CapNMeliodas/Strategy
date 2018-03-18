#pragma once
#include <memory>
#include "Archer.h"
#include "Dragon_knight.h"
#include "Neromonk.h"
#include "Peaceful_alchemist.h"

class Unit_factory {
	Unit_factory() {};

	virtual std::shared_ptr<Unit> Create_unit() = 0;
};