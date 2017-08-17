#include "includes/Object_factory.hpp"
#include "includes/Factory.hpp"

int		main() {
	Object_factory *fac = new Factory;
	Object *obj = fac->create_object("a");
	obj->speak();
	obj = fac->create_object("b");
	obj->speak();
	return 0;
}