#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) { type = "Dog"; doggy = new Brain(); }

Dog::~Dog( void ) { std::cout << "Just get out" << std::endl; delete doggy; }

Dog::Dog(Dog const &another) { *this = another; }

Dog &Dog::operator=(const Dog &assigning)
{
	doggy = new Brain();
	doggy = assigning.doggy;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}