#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his "
	<< this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}