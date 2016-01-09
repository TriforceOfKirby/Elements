#include <iostream>
#include "armor.hh"

Armor::Armor(std::string name) : Equipment(name) {
	std::cout << "Constructed armor.\n";
}

Armor::~Armor() {
	std::cout << "Deconstructed armor.\n";
}
