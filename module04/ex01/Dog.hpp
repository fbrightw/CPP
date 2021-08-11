#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		~Dog( void );
		Dog(Dog const &another);
		Dog &operator=(const Dog &assigning);
		void makeSound() const;
		std::string *getIdeas() const ;

	private:
		Brain* doggy;
};

#endif