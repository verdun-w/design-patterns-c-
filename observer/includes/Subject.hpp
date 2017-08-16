#ifndef DESIGN_PATTERNS_CPP_SUBJECT_HPP
#define DESIGN_PATTERNS_CPP_SUBJECT_HPP

#include <vector>
#include "Observer.hpp"

class Subject {
public:
	void	Attach(Observer *obs);
	void	Notify();
private:
	std::vector<Observer*>	_list;
};

#endif //DESIGN_PATTERNS_CPP_SUBJECT_HPP
