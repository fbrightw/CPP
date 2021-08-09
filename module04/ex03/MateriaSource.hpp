#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	materias[4];
		int			m_index;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource &operator=(MateriaSource &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		int getIndex();
		AMateria*	getMateria(int idx);
};

#endif