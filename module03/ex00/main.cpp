#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-------------EX00-------------" << std::endl;
	std::cout << std::endl;
	ClapTrap First("Nick");

	First.attack("somebody");
	First.beRepaired(123);
	First.takeDamage(200);
}