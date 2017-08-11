#ifndef DESIGN_PATTERNS_CPP_CANONICAL_FORM_HPP
#define DESIGN_PATTERNS_CPP_CANONICAL_FORM_HPP

/*
 * Use canonical form when your class contains a variable
 */

class canonical_form {
public:
	canonical_form(canonical_form const &src);
	virtual				~canonical_form(void);
	canonical_form &	operator=(canonical_form const & src);
private:
	canonical_form(void);  //If you are not going to use one of the canonical functions put it in private. Then you don't need to initialize it.
	int					_var;
};

#endif //DESIGN_PATTERNS_CPP_CANONICAL_FORM_HPP
