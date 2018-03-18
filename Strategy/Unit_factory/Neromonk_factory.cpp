#include "Neromonk_factory.h"

std::shared_ptr<Unit> Neromonk_factory::Create_unit() {
	std::shared_ptr<Neromonk> new_neromonk(new Neromonk);
	return new_neromonk;
}