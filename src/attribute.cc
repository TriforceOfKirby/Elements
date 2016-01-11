#include "attribute.hh"

Attribute::Attribute() : value(0) {}

Attribute::Attribute(uint32_t value) : value(value) {}

double Attribute::Value() const {
	return value * (100.0 / 4294967295.0);
}
