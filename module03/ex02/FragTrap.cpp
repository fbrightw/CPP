#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->Name = "Incognito";
	std::cout << "You are looking to the default constructor of FragTrap, where we define " << Hitpoints << " Hitpoints ";
	std::cout << EnergyPoints << " Energypoints " << AttackDamage << " AttckDamage " << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "Constructor with string parameter" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "You are looking to the default destructor of FragTrap" << std::endl;
}

void	FragTrap::highFiveGuys( void )
{
	std::cout << "Will u give me high five? There is just one answer: YES!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &another)
{
	std::cout << "FragTrap " << another.Name << " got copy constructor" << std::endl;
	*this = another;
}

FragTrap &FragTrap::operator=(const FragTrap &another)
{
	std::cout << "operator assignation to " << another.Name << " ClapTrap class" <<  std::endl;
	this->Name = another.Name;
	return (*this);
}
