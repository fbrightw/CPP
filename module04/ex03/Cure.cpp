#include "Cure.hpp"

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}
