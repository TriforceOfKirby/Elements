#include <iostream>
#include "equipment.hh"

Equipment::Equipment(std::string name) : Item(name) {
	std::cout << "Constructed equipment.\n";
}

Equipment::~Equipment() {
	std::cout << "Deconstructed equipment.\n";
}
