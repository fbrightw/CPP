#include "Cure.hpp"

Cure::Cure( void ) { }

Cure::~Cure( void ) { }

AMateria* Cure::clone() const
{
	return (new Cure());
}

Cure::Cure (Cure &other) { *this = other; }

Cure &Cure::operator=(Cure &other) {
	this->type = other.type;
	return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}
