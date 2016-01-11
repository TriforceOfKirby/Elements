#include <iostream>
#include <memory>
#include "armor.hh"
#include "entity.hh"
#include "weapon.hh"

int main() {
	auto player = std::make_unique<Entity>("TriforceOfKirby");
	auto sword = std::make_unique<Weapon>("Iron Sword");
	auto chestplate = std::make_unique<Armor>("Iron Chestplate");

	std::cout << player->Strength() << std::endl;
}
