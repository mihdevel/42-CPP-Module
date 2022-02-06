#include <iostream>
#include "whatever.hpp"

template <typename T>
void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T max(T const &a, T const &b)
{
	return (a > b) ? a : b;
}

template <typename T>
T min(T const &a, T const &b)
{
	return (a < b) ? a : b;
}

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	float e = 5.5;
	float f = 5.4;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl << std::endl;

	double g = 8.5;
	double h = 8.4;
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl << std::endl;

	char r = 'z';
	char t = 'w';
	::swap( r, t );
	std::cout << "r = " << r << ", t = " << t << std::endl;
	std::cout << "min( r, t ) = " << ::min( r, t ) << std::endl;
	std::cout << "max( r, t ) = " << ::max( r, t ) << std::endl;

	return 0;
}