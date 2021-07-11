#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *Zombie_pointer = new Zombie(name);
	return (Zombie_pointer);
}
