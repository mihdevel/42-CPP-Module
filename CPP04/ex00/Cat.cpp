#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
}

Cat::Cat(std::string name)
{
	this->_name = name;
	this->setType("Cat");
}

Cat::Cat(Cat const & src) : Animal(src)
{
	Animal::operator=(src);
	this->setType("Cat");
}

Cat::~Cat(void)
{
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (&rhs == this)
		return *this;
	Animal::operator=(rhs);
	return *this;
}

void Cat::makeSound(void)
{
	std::cout << "Meow meow" << std::endl;
}
