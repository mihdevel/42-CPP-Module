#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	this->_raw_bits = 0;
	return;
}

Fixed::Fixed (const int number)
{
	this->_raw_bits = number << this->_fractional_bits;
}

Fixed::Fixed (const float number)
{
	this->_raw_bits = roundf(number * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
	return;
}

float Fixed::toFloat() const
{
	return ((float)this->_raw_bits / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt() const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

Fixed::Fixed(const Fixed & other)
{
	*this = other;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_raw_bits = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return;
}

int Fixed::getRawBits() const
{
	return this->_raw_bits;
}

std::ostream & operator<<(std::ostream & o, const Fixed & object)
{
	o << object.toFloat();
	return o;
}

bool Fixed::operator>(const Fixed & other)
{
	return(this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed & other)
{
	return(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed & other)
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed & other)
{
	return(this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed & other)
{
	return(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed & other)
{
	return(this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const & other)
{
	Fixed out;
	out._raw_bits = this->_raw_bits + other.getRawBits();
	return out;
}

Fixed Fixed::operator-(Fixed const & other)
{
	Fixed out;
	out._raw_bits = this->_raw_bits - other.getRawBits();
	return out;
}

Fixed Fixed::operator*(Fixed const & other)
{
	Fixed out;
	long res;
	res = (long)this->_raw_bits * (long)other.getRawBits();
	out._raw_bits = res >> this->_fractional_bits;
	return out;
}

Fixed Fixed::operator/(Fixed const & other)
{
	Fixed out;
	long res;
	if (other.getRawBits() == 0){
		std::cout << "error: div by 0" << std::endl;
		return *this;
	}

	res = (long)this->_raw_bits << this->_fractional_bits;
	out._raw_bits = res / (long)other.getRawBits();
	return out;
}

Fixed & Fixed::operator++()
{
	this->_raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed saved(*this);
	this->_raw_bits++;
	return saved;
}

Fixed & Fixed::operator--()
{
	this->_raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed saved(*this);
	this->_raw_bits--;
	return saved;
}

Fixed & Fixed::min(Fixed & one, Fixed & two)
{
	if (one < two)
		return one;
	return two;
}

Fixed const & Fixed::min(Fixed const & one, Fixed const & two)
{
	if (one.getRawBits() < two.getRawBits())
		return one;
	return two;
}

Fixed & Fixed::max(Fixed & one, Fixed & two)
{
	if (one > two)
		return one;
	return two;
}

Fixed const & Fixed::max(Fixed const & one, Fixed const & two)
{
	if (one.getRawBits() > two.getRawBits())
		return one;
	return two;
}
