#include "span.hpp"

#include <numeric>

const char *Span::SizeException:: what() const throw ()
{
	return ("ERROR: to add extra number");
}

const char *Span::SmallArrayException:: what() const throw ()
{
	return ("ERROR: too small array to find the span");
}

Span::Span(int N) : _N(N)
{
	this->_checkN = 0;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &rhs)
		{
	this->_N = rhs._N;
	this->_checkN = rhs._checkN;
	this->my_array = rhs.my_array;
	return (*this);
}

unsigned int Span::getN() const
{
	return (this->_N);
}

Span::~Span() {}

void Span::addNumber(int number)
{
	if (this->_N > 0 && this->_checkN != this->_N) {
		my_array.push_back(number);
		this->_checkN++;
	}
	else
		throw SizeException();
}

int		Span::shortestSpan(void)
{
	if (getN() >= 2) {
		std::vector<int> res;
		res.assign(my_array.begin(), my_array.end());

		std::sort(res.begin(), res.end());
		std::adjacent_difference(res.begin(), res.end(), res.begin());
		int span = *(std::min_element(res.begin() + 1, res.end()));
		return(span);
	}
	else {
		throw SmallArrayException();
	}
}

int		Span::longestSpan(void)
{
	if (getN() >= 2)
	{
		int span = *(max_element(my_array.begin(), my_array.end())) - \
            *(min_element(my_array.begin(), my_array.end()));
		return (span);
	} else
	{
		throw SmallArrayException();
	}
}