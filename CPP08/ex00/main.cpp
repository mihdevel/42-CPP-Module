#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.h"

int main(void)
{
	std::deque<int> my_deq;
	for (size_t i = 0; i < 5; i++)
		my_deq.push_back(i);

	try
	{
		int in_deq = easyfind(my_deq, 5);
		std::cout << "Item index in array in_deq: " << in_deq << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "***************************" << std::endl;

	std::vector<int> m_vec;
	m_vec.push_back(5);
	m_vec.push_back(8);
	m_vec.push_back(10);
	m_vec.push_back(10);
	m_vec.push_back(8);

	try
	{
		int in_vec = easyfind(m_vec, 8);
		std::cout << "Item index in array in_vec: " << in_vec << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}