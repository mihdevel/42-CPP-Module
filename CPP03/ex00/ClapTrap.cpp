#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
_energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " is alive!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " is died!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target
		<<", causing " << this->_attackDamage << " points of damage!" <<
		std::endl;
	this->_energyPoints -= 4;
	std::cout << this->_name << " have : " << this->_energyPoints
		<< " energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " lose : " << amount << " points" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " repairs : " << amount << " points" << std::endl;
	this->_hitPoints += amount;
}
