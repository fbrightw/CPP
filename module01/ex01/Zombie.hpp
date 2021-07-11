#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstring>
#include <iostream>

class Zombie{

public:

	void	announce(void);
	Zombie();
	Zombie(std::string name);
	void	setName(std::string name);
	~Zombie();

private:

	std::string	_name;

};
#endif