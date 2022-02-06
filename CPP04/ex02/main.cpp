#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	const Animal* k = new Animal();

	delete j;
//	delete i;
//	delete k;

	return (0);
}