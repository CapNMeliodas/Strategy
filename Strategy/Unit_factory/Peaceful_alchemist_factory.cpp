#include "Peaceful_alchemist_factory.h"

std::shared_ptr<Unit> Peaceful_alchemist_factory::Create_unit() {
	std::shared_ptr<Peaceful_alchemist> new_peaceful_alchemist(new Peaceful_alchemist);
	return new_peaceful_alchemist;
}