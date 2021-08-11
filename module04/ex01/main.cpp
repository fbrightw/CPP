#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// const std::string *ideas1;
	// const std::string *ideas2;

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// 	ideas1 = tmp.getIdeas();
	// 	ideas2 = basic.getIdeas();
	// 	std::cout << ideas1[0] << std::endl;
	// 	std::cout << ideas2[0] << std::endl;
	// }

	Cat Vla;
	Cat Bla;

	// Vla = Bla;

	std::cout << Vla.getIdeas()[0] << std::endl;
	std::cout << Bla.getIdeas()[0] << std::endl;

	// int seize = 31;
	// Animal *Array[seize];
	// for (int i = 0; i < seize; i++)
	// {
	// 	if (i % 2 == 0)
	// 		Array[i] = new Cat();
	// 	else
	// 		Array[i] = new Dog();
	// }

	// for (int i = 0; i < seize; i++)
	// 	delete Array[i];
}
