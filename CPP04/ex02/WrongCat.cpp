#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->setType("Cat");
	std::cout << this->getType() << this->_name << " WrongCat constructor is "
												   "called!" <<
	std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->setType("Cat");
	std::cout << this->getType() << this->_name << " WrongCat constructor is "
												   "called!" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	this->setType("Cat");
	std::cout << this->getType() << this->_name << " WrongCat constructor is "
												   "called!" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << this->getType() << this->_name << " destructor is called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (&rhs == this)
		return *this;
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound(void)
{
	std::cout << this->_type << " say meow" << std::endl;
}
