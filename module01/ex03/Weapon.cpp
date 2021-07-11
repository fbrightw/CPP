#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
}

void				Weapon::setType(std::string weapon_type) { type = weapon_type; } ;

const std::string	&Weapon::getType()
{
	const std::string &strref = type;

	return (strref);
}
