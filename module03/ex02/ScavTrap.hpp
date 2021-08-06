#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &another);
		ScavTrap &operator=(const ScavTrap &assigning);
		~ScavTrap( void );
		void	guardGate();

};

#endif