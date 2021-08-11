#include "AMateria.hpp"

AMateria::AMateria( void ) { type = "No"; }

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria & AMateria::operator=(AMateria const &other) {
	this->type = other.getType();
	return *this;
}

AMateria::AMateria(std::string const & type) { this->type = type; }

std::string const & AMateria::getType() const { return (type); }

void AMateria::use(ICharacter& target) { target.getName();}
