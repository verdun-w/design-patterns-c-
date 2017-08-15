#include "includes/Example.hpp"

Example1::Example1(Subject *sub) {
	sub->Attach(this);
}

void Example1::update() {
	std::cout << "updating" << std::endl;
}
