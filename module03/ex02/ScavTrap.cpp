#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->Name = "Incognito";
	std::cout << "Welcome to the default constructor of ScavTrap class, where we define " << Hitpoints << " Hitpoints ";
	std::cout << EnergyPoints << " Energypoints " << AttackDamage << " AttckDamage " << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Exit from programm after destructor of ScavTrap class" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "There is a ScavTrap " << Name << " with " << Hitpoints << " Hitpoints ";
	std::cout << EnergyPoints << " Energypoints " << AttackDamage << " AttckDamage " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &another)
{
	std::cout << "ScavTrap " << another.Name << " got copy constructor" << std::endl;
	*this = another;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &another)
{
	std::cout << "operator assignation to " << another.Name << " ScavTrap class" <<  std::endl;
	this->Name = another.Name;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " has entered in Gate keeper mode" << std::endl;
}