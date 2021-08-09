#include "Ice.hpp"

Ice::Ice( void )
{
	type = "ice";
}

Ice::~Ice( void ) {}

Ice::Ice (Ice &other) { *this = other; }

Ice &Ice::operator=(Ice &other) {
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
