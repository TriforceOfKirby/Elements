#include <iostream>
#include "item.hh"

Item::Item(std::string name) : name(name) {
	std::cout << "Constructed item.\n";
}

Item::~Item() {
	std::cout << "Deconstructed item.\n";
}

std::string Item::Name() const {
	return name;
}

uint32_t Item::Mass() const {
	return mass;
}

uint32_t Item::Volume() const {
	return volume;
}

uint32_t Item::Value() const {
	return value;
}
