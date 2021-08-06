#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal(WrongAnimal const &another);
		WrongAnimal &operator=(const WrongAnimal &assigning);
		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif