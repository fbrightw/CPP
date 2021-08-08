#include "Character.hpp"

Character::Character( void ) : Name("Incognito")
{
	for (int i = 0; i < 4; i++)
		materias[i] = 0;
	index = 0;
}

Character::Character(std::string name) : Name(name)
{
	for (int i = 0; i < index; i++) {
		if (materias[i])
			delete materias[i];
		materias[i] = 0;
	}
	index = 0;
}

Character::~Character() 
{
	for (int i = 0; i < index; i++) {
		if (materias[i])
			delete materias[i];
		materias[i] = 0;
	}
}

std::string const & Character::getName() const { return Name; }

void Character::equip(AMateria* m)
{
	if (this->index == 4)
		return ;
	for (int i = 0; i < this->index; i++) {
		if (this->materias[i] == m)
			return ;
	}
	materias[index] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || index <= idx)
		return ;
	materias[idx] = 0;
	index -= 1;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || this->index <= idx)
		return ;
	materias[idx]->use(target);
}
