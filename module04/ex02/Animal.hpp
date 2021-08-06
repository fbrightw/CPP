#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal( void );
		~Animal( void );
		Animal(Animal const &another);
		Animal &operator=(const Animal &assigning);
		virtual void makeSound() = 0;
		std::string getType() const;

	protected:
		std::string type;
};

#endif