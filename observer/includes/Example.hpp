#ifndef DESIGN_PATTERNS_CPP_Example_HPP
#define DESIGN_PATTERNS_CPP_Example_HPP

#include "Observer.hpp"
#include "Subject.hpp"
#include <iostream>

class Example : public Observer {
public:
	Example(Subject *sub);
	void	update();
};

#endif //DESIGN_PATTERNS_CPP_Example_HPP
