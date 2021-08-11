#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) { type = "Cat"; kitty = new Brain(); }

Cat::~Cat( void ) { std::cout << "Just get out from Cat " << std::endl; delete kitty;}

Cat::Cat(Cat const &another) {
	if (this->kitty)
		delete this->kitty;
	this->kitty = new Brain();
	this->kitty->setIdeas(another.getIdeas());
}

std::string *Cat::getIdeas() const { return kitty->getIdeas(); }

Cat &Cat::operator=(const Cat &assigning)
{
	if (this->kitty)
		delete this->kitty;
	this->kitty = new Brain();
	this->kitty->setIdeas(assigning.getIdeas());
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
