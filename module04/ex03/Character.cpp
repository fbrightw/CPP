#include "Character.hpp"

Character::Character( void ) : Name("Incognito")
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(std::string name) : Name(name)
{
	for (int i = 0; i < m_index; i++) {
		materias[i] = NULL;
	}
	m_index = 0;
}

Character::~Character()
{
	for (int i = 0; i < m_index; i++) {
		if (materias[i])
			delete materias[i];
		materias[i] = 0;
	}
}

AMateria*	Character::getMateria(int idx) { return (materias[idx]); }

int			Character::getIndex() { return (m_index); }

Character::Character(Character &other)
{
	Name = other.getName();
	m_index = other.getIndex();
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
		materias[i] = other.getMateria(i);
	}
}

Character &Character::operator=(Character &other)
{
	Name = other.getName();
	m_index = other.getIndex();
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
		materias[i] = other.getMateria(i);
	}
	return (*this);
}

std::string const & Character::getName() const { return Name; }

void Character::equip(AMateria* m)
{
	if (this->m_index == 4)
		return ;
	for (int i = 0; i < this->m_index; i++) {
		if (this->materias[i] == m)
			return ;
	}
	materias[m_index] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || m_index <= idx)
		return ;
	materias[idx] = 0;
	m_index -= 1;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || this->m_index <= idx)
		return ;
	materias[idx]->use(target);
}
