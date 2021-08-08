#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : m_index(0)
{

}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* m)
{
	materias[m_index] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (!materias[m_index]->getType().compare(type))
		return (materias[m_index]);
	return 0;
}