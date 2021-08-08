#include "Character.hpp"

Character::~Character() {}

std::string const & Character::getName() const { return Name; }

void Character::equip(AMateria* m)
{
	materias[index] = m;
}

void Character::unequip(int idx)
{
	materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	materias[idx]->use(target);
}
