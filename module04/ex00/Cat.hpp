#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat( void );
		~Cat( void );
		Cat(Cat const &another);
		Cat &operator=(const Cat &assigning);
		void makeSound() const;
};

#endif