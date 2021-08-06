#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->_hp = this->getHitPoints();
	this->_damageAttack = this->getAttackDamage();
	this->_energypoints = this->getEnergyPoints();
	this->_Name = "Incognito";
	std::cout << "Monster, named DiamondTrap, just reached to his default constructor where defined ";
	std::cout << "hitpoints = " << _hp << " and ";
	std::cout << "damage attack = " << _damageAttack << "from FragTrap class";
	std::cout << "energy points = " << _energypoints << " from ScavTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_hp = getHitPoints();
	_damageAttack = getAttackDamage();
	_energypoints = getEnergyPoints();
	this->_Name = name;
	std::cout << "I'm here just introduce myself in onstrctor. I'm " << name << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Time to get out from DiamonTrap class" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "If u ask me one simple question, like who am I, it will be just one reply: " << std::endl;
	std::cout << "I am just " << this->_Name << " who is part of " << ClapTrap::Name << " ClapTrap class" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &another)
{
	std::cout << "DiamondTrap " << another._Name << " got copy constructor" << std::endl;
	*this = another;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &another)
{
	std::cout << "operator assignation to " << another._Name << " DiamondTrap class" <<  std::endl;
	this->Name = another.Name;
	return (*this);
}