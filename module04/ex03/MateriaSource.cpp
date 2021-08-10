#include "MateriaSource.hpp"
// #include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "Materia Source" << std::endl;
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
	m_index = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (materias[i])
			delete materias[i];
		materias[i] = NULL;
	}
}

AMateria*	MateriaSource::getMateria(int idx) { return (materias[idx]); }

int			MateriaSource::getIndex() { return (m_index); }

MateriaSource::MateriaSource(MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
		materias[i] = other.getMateria(i);
	}
	m_index = other.getIndex();
}

MateriaSource &MateriaSource::operator=(MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
		materias[i] = other.getMateria(i);
	}
	m_index = other.getIndex();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m_index == 4)
		return;
	materias[m_index] = m;
	// std::cout << materias[0]->getType() << std::endl;
	// std::cout << materias[1] << std::endl;
	m_index += 1;

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
		if (materias[i]->getType().compare(type) == 0) {
			// std::cout << materias[i]->getType() << std::endl;
			return (this->materias[i]->clone());
		}
	}
	return NULL;
}
