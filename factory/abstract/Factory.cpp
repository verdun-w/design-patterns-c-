#include "includes/Factory.hpp"

Object *Factory::create_object(std::string key) {
	if (!key.compare("a"))
		return new Object_a;
	else if (!key.compare("b"))
		return new Object_b;
	return NULL;
}