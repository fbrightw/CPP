#include "HumanB.hpp"

HumanB::HumanB(std::string name) { _name = name; }

void	HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weaponB = &weapon;
}
