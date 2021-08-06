#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) { type = "Cat"; kitty = new Brain(); }

Cat::~Cat( void ) { std::cout << "Just get out" << std::endl; delete kitty;}

Cat::Cat(Cat const &another) { *this = another; }

Cat &Cat::operator=(const Cat &assigning)
{
	kitty = new Brain();
	kitty = assigning.kitty;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}