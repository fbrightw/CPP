#include "Dog.hpp"

Dog::Dog( void ) { type = "Dog"; }

Dog::~Dog( void ) { std::cout << "Just get out" << std::endl; }

Dog::Dog(Dog const &another) { *this = another; }

Dog &Dog::operator=(const Dog &assigning)
{
	type = assigning.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}