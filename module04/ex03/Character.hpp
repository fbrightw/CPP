#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string	Name;
		AMateria*	materias[4];
		int			m_index;

	public:
		Character( void );
		Character(std::string name);
		Character(Character &other);
		Character &operator=(Character &ohther);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		AMateria*	getMateria(int idx);
		int			getIndex();
};

#endif