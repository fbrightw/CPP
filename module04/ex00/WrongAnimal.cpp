#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	// std::cout << "constructor of Animal class" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	// std::cout << "destructor of Animal class" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &another)
{
	*this = another;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assigning)
{
	type = assigning.type;
	return (*this);
}

std::string WrongAnimal::getType() const { return (type); }

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal's sound" << std::endl;
}
