#include "includes/Example.hpp"

Example::Example(Subject *sub) {
	sub->Attach(this);
}

void Example::update() {
	std::cout << "updating" << std::endl;
}
