#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		~ScavTrap( void );
		ScavTrap(ScavTrap const &another);
		void	guardGate();
		ScavTrap &operator=(const ScavTrap &assigning);
		int getEnergyPoints(void);
		void	attack(std::string const & target);
};

#endif