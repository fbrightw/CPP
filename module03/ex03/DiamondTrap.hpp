#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	_Name;
		int _hp;
		int	_damageAttack;
		int	_energypoints;

	public:
		DiamondTrap( void );
		DiamondTrap(std::string Name);
		DiamondTrap(DiamondTrap const &another);
		DiamondTrap &operator=(const DiamondTrap &assigning);
		~DiamondTrap( void );
		void	whoAmI();
};
#endif