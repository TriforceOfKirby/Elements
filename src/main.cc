#include <iostream>
#include <memory>
#include "armor.hh"
#include "entity.hh"
#include "weapon.hh"

int main() {
	auto player = std::make_unique<Entity>("TriforceOfKirby");
	auto sword = std::make_unique<Weapon>("Iron Sword");
	auto chestplate = std::make_unique<Armor>("Iron Chestplate");

	player->SetStrength(12.3);
	std::cout << player->Strength() << std::endl;

	player->SetStrength(1234567890u);
	std::cout << player->Strength() << std::endl;
}
