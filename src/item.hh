#pragma once

#include <cstdint>
#include <string>

class Item {
public:
	Item(std::string);
	~Item();
	std::string Name() const;
	uint32_t Mass() const;
	uint32_t Volume() const;
	uint32_t Value() const;
protected:
	std::string name;
	uint32_t mass;
	uint32_t volume;
	uint32_t value;
};
