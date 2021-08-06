#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat( void );
		~Cat( void );
		Cat(Cat const &another);
		Cat &operator=(const Cat &assigning);
		void makeSound() const;

	private:
		Brain* kitty;
};

#endif