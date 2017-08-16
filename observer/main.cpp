#include "includes/Subject.hpp"
#include "includes/Observer.hpp"
#include "includes/Example.hpp"


int		main() {
	Subject	sub;
	Example ex1(&sub);
	Example ex2(&sub);


	sub.Notify();
}