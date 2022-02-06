#include "Fixed.hpp"

int main(void)
{
	Fixed a (5);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c (10.1f);
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "div a/c: " << (a / c) << std::endl;
	a = -10;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "div a/c: " << (a / c) << std::endl;
	c = -5.3f;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "div a/c: " << (a / c) << std::endl;
	c = 0;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "div a/c: " << (a / c) << std::endl;

	c = 100;
	a = 90.5f;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a + c: " << (a + c) << std::endl;

	std::cout << "a - c: " << (a - c) << std::endl;

	a = 0;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "c: " << c << std::endl;
	std::cout << "a * c: " << (a * c) << std::endl;
	a = -100;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a * c: " << (a * c) << std::endl;
	c = -0.2f;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a * c: " << (a * c) << std::endl;
	c = 0;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a * c: " << (a * c) << std::endl;


	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "a max b: " << Fixed::max( a, b ) << std::endl;
	std::cout << "a min b: " << Fixed::min( a, b ) << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	return (0);
}