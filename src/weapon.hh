#pragma once

#include "equipment.hh"

class Weapon : public Equipment {
public:
	Weapon(std::string);
	~Weapon();
private:
	uint32_t damage;
};
