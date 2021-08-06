#include "Cat.hpp"

Cat::Cat( void ) { type = "Cat"; }

Cat::~Cat( void ) { std::cout << "Just get out" << std::endl; }

Cat::Cat(Cat const &another) { *this = another; }

Cat &Cat::operator=(const Cat &assigning)
{
	type = assigning.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}