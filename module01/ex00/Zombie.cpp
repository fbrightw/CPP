#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie " << _name << " is created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is killed :(" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
