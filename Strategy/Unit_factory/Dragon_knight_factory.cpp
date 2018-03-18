#include "Dragon_knight_factory.h"

std::shared_ptr<Unit> Dragon_knight_factory::Create_unit() {
	std::shared_ptr<Dragon_knight> new_dragon_knight(new Dragon_knight);
	return new_dragon_knight;
}