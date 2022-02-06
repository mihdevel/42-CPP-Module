#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout  << "ScavTrap " << this->_name << " died!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (&rhs == this)
		return *this;
	ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::guardGate(void)
{
	std::cout  << "ScavTrap " << this->_name << " have enterred in Gate keeper "
										   "mode" << std::endl;
}