#include "entity.hh"

Entity::Entity(std::string name) : name(name) {}

std::string Entity::Name() const {
	return name;
}

double Entity::Vitality() const {
	return vitality.Value();
}

double Entity::Endurance() const {
	return endurance.Value();
}

double Entity::Wisdom() const {
	return wisdom.Value();
}

double Entity::Strength() const {
	return strength.Value();
}

double Entity::Resilience() const {
	return resilience.Value();
}

double Entity::Intelligence() const {
	return intelligence.Value();
}

double Entity::Fortitude() const {
	return fortitude.Value();
}

double Entity::Agility() const {
	return agility.Value();
}

double Entity::Dexterity() const {
	return dexterity.Value();
}

double Entity::Charisma() const {
	return charisma.Value();
}

void Entity::SetVitality(double vitality) {
	this->vitality = vitality * (4294967295.0 / 100.0);
}

void Entity::SetEndurance(double endurance) {
	this->endurance = endurance * (4294967295.0 / 100.0);
}

void Entity::SetWisdom(double wisdom) {
	this->wisdom = wisdom * (4294967295.0 / 100.0);
}

void Entity::SetStrength(double strength) {
	this->strength = strength * (4294967295.0 / 100.0);
}

void Entity::SetResilience(double resilience) {
	this->resilience = resilience * (4294967295.0 / 100.0);
}

void Entity::SetIntelligence(double intelligence) {
	this->intelligence = intelligence * (4294967295.0 / 100.0);
}

void Entity::SetFortitude(double fortitude) {
	this->fortitude = fortitude * (4294967295.0 / 100.0);
}

void Entity::SetAgility(double agility) {
	this->agility = agility * (4294967295.0 / 100.0);
}

void Entity::SetDexterity(double dexterity) {
	this->dexterity = dexterity * (4294967295.0 / 100.0);
}

void Entity::SetCharisma(double charisma) {
	this->charisma = charisma * (4294967295.0 / 100.0);
}
