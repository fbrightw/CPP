#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & getType() const { return (type); }

