#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fx) : _raw_bits(fx._raw_bits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed (const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = number << this->_fractional_bits;
}

Fixed::Fixed (const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(number * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_raw_bits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw_bits;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_raw_bits / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

std::ostream & operator<<(std::ostream & o, const Fixed & object){
	o << object.toFloat();
	return o;
}


