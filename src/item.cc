#include <iostream>
#include "item.hh"

Item::Item(std::string name) : name(name) {
	std::clog << "Created item with name " << this->Name() << std::endl;
}

Item::~Item() {
	std::clog << "Deleted item with name " << this->Name() << std::endl;
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
