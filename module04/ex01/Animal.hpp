#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal(Animal const &another);
		Animal &operator=(const Animal &assigning);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif