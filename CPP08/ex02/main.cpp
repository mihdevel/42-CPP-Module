#include <iostream>
#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();

	std::cout << "Size: ";
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "Iterator: ";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Reverse iterator" << std::endl;
	MutantStack<int>::reverse_iterator ritb = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	for (; ritb != rite; ritb++)
	{
		std::cout << *ritb << std::endl;
	}

	return (0);
}