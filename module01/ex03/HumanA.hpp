#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon& weapon_a);
	void				attack(void);

private:

	std::string			_name;
	Weapon				&weaponA;

};

#endif