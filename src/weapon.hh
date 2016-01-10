#pragma once

#include "equipment.hh"

class Weapon : public Equipment {
public:
	Weapon(std::string);
private:
	uint32_t damage;
};
