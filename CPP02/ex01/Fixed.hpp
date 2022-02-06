#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
# include <cmath>


class Fixed{
	public:
		Fixed();
		Fixed(Fixed const &fx);
		Fixed (const int number);
		Fixed (const float number);
		~Fixed();
		Fixed& operator=(Fixed const & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _raw_bits;
		static const int _fractional_bits;
};

std::ostream & operator<<(std::ostream & o, const Fixed & object);

#endif
