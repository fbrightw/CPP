#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : m_index(0)
{
	for (int i = 0; i < m_index; i++) {
		materias[i] = 0;
	}
	m_index = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (materias[i])
			delete materias[i];
		materias[i] = 0;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	materias[m_index] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (!materias[m_index]->getType().compare(type))
		return (materias[m_index]->clone());
	return 0;
}