#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap(std::string name);
		void	highFiveGuys( void );
		FragTrap(FragTrap const &another);
		FragTrap &operator=(const FragTrap &assigning);

	protected:
		int		getHitPoints( void );
		int		getAttackDamage( void );
};
#endif