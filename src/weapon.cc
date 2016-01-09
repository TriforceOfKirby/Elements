#include <iostream>
#include "weapon.hh"

Weapon::Weapon(std::string name) : Equipment(name) {
	std::cout << "Constructed weapon.\n";
}

Weapon::~Weapon() {
	std::cout << "Deconstructed weapon.\n";
}
