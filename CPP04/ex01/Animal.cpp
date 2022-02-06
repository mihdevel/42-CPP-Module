#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal(std::string name) : _name(name), _type("Animal")
{
	std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << "Animal constructor is called!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called!" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_type = rhs._type;
	return *this;
}

void Animal::setType(const std::string & type)
{
	this->_type = type;
}

std::string Animal::getType(void)
{
	return this->_type;
}

void Animal::makeSound(void)
{
	std::cout << "Animal say something" << std::endl;
}