#include "Archer_factory.h"

std::shared_ptr<Unit> Archer_factory::Create_unit() {
	std::shared_ptr<Archer> new_archer(new Archer);
	return new_archer;
}