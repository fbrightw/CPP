#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:

		Cure( void );
		~Cure( void );
		Cure (Cure &other);
		Cure &operator=(Cure &other);
		// Cure(std::string const &type);

		void use(ICharacter& target);
		AMateria* clone() const;

};

#endif