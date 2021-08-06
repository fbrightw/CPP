#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		virtual ~Dog( void );
		Dog(Dog const &another);
		Dog &operator=(const Dog &assigning);
		std::string getType();
		void makeSound() const;

	private:
		Brain* doggy;
};

#endif