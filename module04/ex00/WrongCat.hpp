#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat(WrongCat const &another);
		WrongCat &operator=(const WrongCat &assigning);
		void makeSound() const;
};

#endif