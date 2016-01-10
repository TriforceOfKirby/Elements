#pragma once

#include "equipment.hh"

class Armor : public Equipment {
public:
	Armor(std::string);
private:
	uint32_t protection;
};
