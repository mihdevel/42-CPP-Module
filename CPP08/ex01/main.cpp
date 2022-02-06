#include <iostream>
#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span	sp2(20001);
	int	a[20000];

	for (int i = 0; i < 20000; i++)
	{
		a[i] = i;
	}
	sp2.addNumber(a, a + 20000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return (0);

	return 0;
}