#include "includes/Subject.hpp"
#include "includes/Observer.hpp"
#include "includes/Example.hpp"


int		main() {
	Subject	sub;
	Example1 ex1(&sub);
	Example1 ex2(&sub);

	sub.Notify();
}