#include "AMateria.hpp"

AMateria::AMateria( void ) { }

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type) { this->type = type; }

std::string const & AMateria::getType() const { return (type); }

void AMateria::use(ICharacter& target) { target.getName();}