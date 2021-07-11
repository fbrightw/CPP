#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie *first_zombie = newZombie("Alex");
	Zombie seconde_zombie = Zombie("Pete");

	first_zombie->announce();
	seconde_zombie.announce();

	randomChump("Pete");
	delete first_zombie;
}
