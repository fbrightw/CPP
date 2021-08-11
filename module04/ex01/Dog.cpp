#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) { type = "Dog"; doggy = new Brain(); /*std::cout << this->doggy << std::endl;*/}

Dog::~Dog( void ) { std::cout << "Just get out from Dog" << std::endl; delete doggy; }

Dog::Dog(Dog const &another) {
	if (this->doggy)
		delete this->doggy;
	this->doggy = new Brain();
	this->doggy->setIdeas(another.getIdeas());
	// std::cout << "this" << this->doggy << "another's dog" << another.doggy << std::endl;
	// std::cout << "this" << this->doggy << std::endl;
}

std::string *Dog::getIdeas() const { return doggy->getIdeas(); }

Dog &Dog::operator=(const Dog &assigning)
{
	if (this->doggy)
		delete this->doggy;
	this->doggy = new Brain();
	this->doggy->setIdeas(assigning.getIdeas());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
