#include "canonical_form.hpp"

canonical_form::canonical_form() : _var(42) {}

canonical_form::canonical_form(canonical_form const &src) {
	*this = src;
}

canonical_form::~canonical_form() {}

canonical_form& canonical_form::operator=(canonical_form const &src) {
	this->_var = src._var;
	return *this;
}
