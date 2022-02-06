#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " is alive!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout  << "ScavTrap " << this->_name << " died!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (&rhs == this)
		return *this;
	ClapTrap::operator=(rhs);
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout  << "FragTrap specific function " << this->_name << " give "
									"positive high fives request" <<std::endl;
}

