#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his "
	<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}