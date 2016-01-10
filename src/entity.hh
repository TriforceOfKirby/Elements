#pragma once

#include <string>
#include "attribute.hh"

class Entity {
public:
	Entity(std::string);
protected:
	std::string name;
	Attribute vitality;
	Attribute endurance;
	Attribute wisdom;
	Attribute strength;
	Attribute resilience;
	Attribute intelligence;
	Attribute fortitude;
	Attribute agility;
	Attribute dexterity;
	Attribute charisma;
};
