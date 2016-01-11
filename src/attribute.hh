#pragma once

#include <cstdint>

class Attribute {
public:
	Attribute();
	Attribute(uint32_t);
	uint32_t Value() const;
private:
	uint32_t value;
};
