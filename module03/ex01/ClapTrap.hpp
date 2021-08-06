#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>

class ClapTrap {
	protected:
		std::string	Name;
		int	Hitpoints;
		int	EnergyPoints;
		int	AttackDamage;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	public:
		ClapTrap( void );
		ClapTrap(std::string Name);
		~ClapTrap( void );
		ClapTrap(ClapTrap const &another);
		ClapTrap &operator=(const ClapTrap &assigning);
		void	attack(std::string	const & target);
};

#endif