#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-------------EX00-------------" << std::endl;
	std::cout << std::endl;
	ClapTrap First("Nick");
	First.attack("somebody");

	std::cout << std::endl;
	std::cout << "-------------EX01-------------" << std::endl;
	std::cout << std::endl;
	ScavTrap Second("Charlie");
	Second.attack("bird");
}