#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string	Name;
		int	Hitpoints;
		int	EnergyPoints;
		int	AttackDamage;

	public:
		ClapTrap( void );
		ClapTrap(std::string Name);
		~ClapTrap( void );
		ClapTrap(ClapTrap const &another);
		ClapTrap &operator=(const ClapTrap &assigning);
		void	attack(std::string	const & target);
};

#endif