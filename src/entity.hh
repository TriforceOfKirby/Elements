#pragma once

#include <string>
#include "attribute.hh"

class Entity {
public:
	Entity(std::string);
	std::string Name() const;
	double Vitality() const;
	double Endurance() const;
	double Wisdom() const;
	double Strength() const;
	double Resilience() const;
	double Intelligence() const;
	double Fortitude() const;
	double Agility() const;
	double Dexterity() const;
	double Charisma() const;
	void SetVitality(double);
	void SetEndurance(double);
	void SetWisdom(double);
	void SetStrength(double);
	void SetResilience(double);
	void SetIntelligence(double);
	void SetFortitude(double);
	void SetAgility(double);
	void SetDexterity(double);
	void SetCharisma(double);
	void SetVitality(uint32_t);
	void SetEndurance(uint32_t);
	void SetWisdom(uint32_t);
	void SetStrength(uint32_t);
	void SetResilience(uint32_t);
	void SetIntelligence(uint32_t);
	void SetFortitude(uint32_t);
	void SetAgility(uint32_t);
	void SetDexterity(uint32_t);
	void SetCharisma(uint32_t);
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
