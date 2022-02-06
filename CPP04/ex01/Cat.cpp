#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
	this->_brain = new Brain();
	this->_brain->ideas[0] = "One cat idea";
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Cat::Cat(std::string name)
{
	this->setType("Cat");
	this->_name = name;
	this->_brain = new Brain();
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	this->setType("Cat");
	this->_brain = new Brain();
	std::cout << this->_type << " constructor is called!" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << this->_type << " destructor is called!" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (&rhs == this)
		return *this;
	delete this->_brain;
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	return *this;
}

void Cat::makeSound(void)
{
	std::cout << "Meow meow" << std::endl;
}
