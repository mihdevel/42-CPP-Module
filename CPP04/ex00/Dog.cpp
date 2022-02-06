#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
}

Dog::Dog(std::string name)
{
	this->_name = name;
	this->setType("Dog");
}

Dog::Dog(Dog const & src)
{
	Animal::operator=(src);
	this->setType("Dog");
}

Dog::~Dog(void)
{
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (&rhs == this)
		return *this;
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound(void)
{
	std::cout << "Woof woof" << std::endl;
}
