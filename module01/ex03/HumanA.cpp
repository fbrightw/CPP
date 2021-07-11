#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon_a) : weaponA(weapon_a)
{
	_name = name;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << weaponA.type << std::endl;
}
