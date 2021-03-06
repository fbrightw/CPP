#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <cstring>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string type;

	public:
		AMateria( void );
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &other);
		AMateria (const AMateria &src);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif