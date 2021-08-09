#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		~Ice( void );
		Ice (Ice &other);
		Ice &operator=(Ice &other);

		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif