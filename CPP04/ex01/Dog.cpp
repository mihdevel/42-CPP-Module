#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Dog::Dog(std::string name)
{
	this->_name = name;
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << this->_type << " destructor is called!" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (&rhs == this)
		return *this;
	delete this->_brain;
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	for (int i = 0; i < 100; ++i)
	{

	}
	return *this;
}

void Dog::makeSound(void)
{
	std::cout << "Woof woof" << std::endl;
}