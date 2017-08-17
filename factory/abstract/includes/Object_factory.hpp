#ifndef DESIGN_PATTERNS_CPP_OBJECT_FACTORY_HPP
#define DESIGN_PATTERNS_CPP_OBJECT_FACTORY_HPP

#include "Object.hpp"
#include <string>

class Object_factory {
public:
	virtual Object *create_object(std::string key) = 0;
};

#endif //DESIGN_PATTERNS_CPP_OBJECT_FACTORY_HPP
