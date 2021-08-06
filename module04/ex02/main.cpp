#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int seize = 30;
	Animal *Array[seize];
	for (int i = 0; i < seize / 2; i++)
		Array[i] = new Cat();
	for (int i = seize / 2; i < seize; i++)
		Array[i] = new Dog();
	for (int i = 0; i < seize / 2; i++)
	{
		std::cout << Array[i] << " ";
		Array[i] = Array[i + seize / 2 - 1];
		std::cout << Array[i] << std::endl;
	}
	// delete Array;
}
