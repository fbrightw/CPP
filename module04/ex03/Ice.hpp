#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		~Ice( void );
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif