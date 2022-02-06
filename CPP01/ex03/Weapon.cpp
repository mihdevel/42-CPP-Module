#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}

std::string const & Weapon::getType() const
{
	return this->_type;
}