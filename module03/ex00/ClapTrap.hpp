#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	Name;
		int	Hitpoints;
		int	EnergyPoints;
		int	AttackDamage;

	public:
		ClapTrap( void );
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &another);
		ClapTrap &operator=(const ClapTrap &assigning);
		~ClapTrap( void );
		void	attack(std::string	const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif