#pragma once

#include <cstdint>

class Attribute {
public:
	Attribute();
	Attribute(uint32_t);
	double Value() const;
private:
	uint32_t value;
};
