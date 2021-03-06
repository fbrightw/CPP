#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << " [DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money ";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl << std::endl;
}

void	Karen::complain(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
void	Karen::complain(int level)
{
	// enum class msgs {DEBUG, INFO, WARNING, ERROR};
	switch (level)
	{
		case 1:
			Karen::debug();
		case 2:
			Karen::info();
		case 3:
			Karen::warning();
		case 4:
			Karen::error();
			break;
		default:
			Karen::complain();
	}
}
