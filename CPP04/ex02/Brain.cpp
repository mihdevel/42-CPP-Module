#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor is called!" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor is called!" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (&rhs == this)
		return *this;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}