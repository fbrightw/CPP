#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << std::endl;
	std::cout << "-------------EX02-------------" << std::endl;
	std::cout << std::endl;
	FragTrap Third;
	Third.highFiveGuys();
}