#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) { type = "Cat"; kitty = new Brain(); }

Cat::~Cat( void ) { std::cout << "Just get out from Cat " << std::endl; delete kitty;}

Cat::Cat(Cat const &another) { *this = another; }

Cat &Cat::operator=(const Cat &assigning)
{
	if (this->kitty)
		delete this->kitty;
	this->kitty = new Brain();
	this->kitty = assigning.kitty;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}