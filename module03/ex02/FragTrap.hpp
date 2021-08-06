#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap(std::string name);
		~FragTrap( void );
		void	highFiveGuys( void );
		FragTrap(FragTrap const &another);
		FragTrap &operator=(const FragTrap &assigning);
};
#endif