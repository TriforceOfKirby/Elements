#include "attribute.hh"

Attribute::Attribute() : value(0) {}

Attribute::Attribute(uint32_t value) : value(value) {}

uint32_t Attribute::Value() const {
	return value;
}
