#include <memory>
#include "weapon.hh"
#include "armor.hh"

int main() {
	auto sword = std::make_unique<Weapon>("Iron Sword");
	auto chestplate = std::make_unique<Armor>("Iron Chestplate");
}
