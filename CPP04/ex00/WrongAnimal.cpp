#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Animal")
{
	std::cout << this->_type << this->_name << " constructor is called!" <<
	std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _name(name), _type("Animal")
{
	std::cout << this->_type << this->_name << " constructor is called!" <<
	std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << this->_type << this->_name << " constructor is called!" <<
	std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->_type << this->_name << " destructor is called!" <<
	std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_type = rhs._type;
	return *this;
}

void WrongAnimal::setType(const std::string & type)
{
	this->_type = type;
}

std::string WrongAnimal::getType(void)
{
	return this->_type;
}

void WrongAnimal::makeSound(void)
{
	std::cout << this->_type << " say something" << std::endl;
}