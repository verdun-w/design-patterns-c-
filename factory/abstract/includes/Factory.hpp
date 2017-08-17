#ifndef DESIGN_PATTERNS_CPP_FACTORY_HPP
#define DESIGN_PATTERNS_CPP_FACTORY_HPP

#include "Object_factory.hpp"
#include "Object_a.hpp"
#include "Object_b.hpp"

class Factory : public Object_factory {
public:
	Object *create_object(std::string key);
};

#endif //DESIGN_PATTERNS_CPP_FACTORY_HPP
