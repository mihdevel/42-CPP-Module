#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "-------------------" << std::endl;

	Animal *animals[10];
	for (int k = 0; k < 10; ++k)
	{
		if (k < 5)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Print array" << std::endl;
	for (int k = 0; k < 10; ++k)
		std::cout << "Animal for number " << k << " is " <<
		animals[k]->getType() << std::endl;

	std::cout << "-------------------" << std::endl;
	for (int k = 0; k < 10; ++k)
		delete animals[k];

	std::cout << "++++++++++++++++++++" << std::endl;
	Dog basic;
	{
		std::cout << "-------------------" << std::endl;
		Dog tmp = basic;
		std::cout << "-------------------" << std::endl;
	}
	std::cout << "++++++++++++++++++++" << std::endl;
	return (0);
}