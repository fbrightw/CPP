#include "Character.hpp"

Character::Character( void ) : _Name("Incognito")
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string name) : _Name(name)
{
	for (int i = 0; i < 4; i++) {
		this->materias[i] = NULL;
	}
	m_index = 0;
}

Character::~Character()
{
	for (int i = 0; i < m_index; i++) {
		if (materias[i])
			delete materias[i];
		this->materias[i] = NULL;
	}
}

AMateria*	Character::getMateria(int idx) { return (materias[idx]); }

int			Character::getIndex() { 
	return (this->m_index); }

Character::Character(Character &other)
{
	_Name = other.getName();
	m_index = other.getIndex();
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete this->materias[i];
		this->materias[i] = other.getMateria(i);
	}
}

Character &Character::operator=(Character &other)
{
	_Name = other.getName();
	m_index = other.getIndex();
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = other.getMateria(i);
	}
	return (*this);
}

std::string const & Character::getName() const { return this->_Name; }

void Character::equip(AMateria* m)
{
	if (this->m_index == 4)
		return ;
	for (int i = 0; i < this->m_index; i++) {
		if (this->materias[i] == m)
			return ;
	}
	materias[m_index] = m;
	// std::cout << materias[m_index]->getType() << std::endl;
	m_index++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || m_index <= idx)
		return ;
	this->materias[idx] = NULL;
	this->m_index -= 1;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || this->m_index <= idx)
		return ;
	// std::cout << m_index << std::endl;
	this->materias[idx]->use(target);
}
