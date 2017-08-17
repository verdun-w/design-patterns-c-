factory-abstract:
	clang++ -Wall -Werror -Wextra -std=c++11 -o factory-abstract factory/abstract/*.cpp
	./factory-abstract

fclean:
	rm factory-abstract
