#pragma once

#include <cstdint>

class Attribute {
public:
	Attribute();
	uint32_t Value() const;
private:
	uint32_t value;
};
