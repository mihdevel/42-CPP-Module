# include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout  << "Zombie " << this->name << " died!" << std::endl;
}

