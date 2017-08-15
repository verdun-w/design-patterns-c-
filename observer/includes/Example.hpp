#ifndef DESIGN_PATTERNS_CPP_EXAMPLE1_HPP
#define DESIGN_PATTERNS_CPP_EXAMPLE1_HPP

#include "Observer.hpp"
#include "Subject.hpp"
#include <iostream>

class Example1 : public Observer {
public:
	Example1(Subject *sub);
	void	update();
};

#endif //DESIGN_PATTERNS_CPP_EXAMPLE1_HPP
