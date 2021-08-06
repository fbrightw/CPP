#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	this->Name = "Incognito";
	std::cout << "You are in default constructor of ClapTrap class, where we define" << " Hitpoints " << Hitpoints;
	std::cout << " EnergyPoints " << EnergyPoints << " AttackDamage " << AttackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Hitpoints(10), EnergyPoints(10), AttackDamage(0)
{
	this->Name = name;
	std::cout << "ClapTrap " << name << " has been created in constructor with input string parameter" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &another)
{
	std::cout << "ClapTrap " << another.Name << " got copy constructor" << std::endl;
	*this = another;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &another)
{
	std::cout << "operator assignation to " << another.Name << " ClapTrap class" <<  std::endl;
	this->Name = another.Name;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "You are in default destructor of ClapTrap class" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << Name << " attacks " << target << ", " << "causing " << "points of damage!" <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << "has got " << amount << " damages!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " need " << amount << " dollars to be repaired" << std::endl;
}
