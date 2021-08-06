#include "Animal.hpp"

Animal::Animal( void )
{
	// std::cout << "constructor of Animal class" << std::endl;
}

Animal::~Animal( void )
{
	// std::cout << "destructor of Animal class" << std::endl;
}

Animal::Animal(Animal const &another)
{
	*this = another;
}

Animal &Animal::operator=(const Animal &assigning)
{
	type = assigning.type;
	return (*this);
}

std::string Animal::getType() const { return (type); }
