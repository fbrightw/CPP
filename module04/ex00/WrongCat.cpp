#include "WrongCat.hpp"

WrongCat::WrongCat( void ) { type = "Cat"; }

WrongCat::~WrongCat( void ) { std::cout << "Just get out" << std::endl; }

WrongCat::WrongCat(WrongCat const &another) { *this = another; }

WrongCat &WrongCat::operator=(const WrongCat &assigning)
{
	type = assigning.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}