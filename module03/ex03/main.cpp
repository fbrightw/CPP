#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
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
	ScavTrap Second;
	ScavTrap Third("Charlie");
	Second.attack("tree");

	std::cout << std::endl;
	std::cout << "-------------EX02-------------" << std::endl;
	std::cout << std::endl;
	FragTrap Fourth;
	Fourth.highFiveGuys();

	std::cout << std::endl;
	std::cout << "-------------EX03-------------" << std::endl;
	std::cout << std::endl;
	DiamondTrap Fifth;
	Fifth.attack("hare");
	Fifth.whoAmI();
}