#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->Name = "Incognito";
	std::cout << "You are looking to the default constructor of FragTrap" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "You are looking to the default destructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "ClapTrap " << name << " has been created in constructor with input string parameter" << std::endl;
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

int		FragTrap::getHitPoints( void ) { return Hitpoints; }

int		FragTrap::getAttackDamage( void ) { return AttackDamage; }
