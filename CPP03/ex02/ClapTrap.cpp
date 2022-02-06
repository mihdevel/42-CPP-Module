#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << this->_name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100),
_energyPoints(100), _attackDamage(30)
{
	std::cout << this->_name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << this->_name << " is alive!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " is died!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
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