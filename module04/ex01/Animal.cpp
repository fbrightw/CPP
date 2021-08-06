#include "Animal.hpp"

Animal::Animal( void )
{
	// std::cout << "constructor of Animal class" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "destructor of Animal class" << std::endl;
}

Animal::Animal(Animal const &another)
{
	*this = another;
}

Animal &Animal::operator=(const Animal &assigning)
{
	Animal *bla = new Animal();
	bla->type = assigning.type;
	return (*bla);
}

std::string Animal::getType() const { return (type); }

void Animal::makeSound() const
{
	std::cout << "Don't know which type of animal, hence can't make proper sound" << std::endl;
}
