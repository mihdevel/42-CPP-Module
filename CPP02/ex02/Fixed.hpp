#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed (const int number);
		Fixed (const float number);
		float toFloat() const;
		int toInt() const;
		Fixed(Fixed const & other);
		Fixed & operator=(Fixed const & rhs);
		int getRawBits() const;
		void setRawBits(int const raw);

		bool operator>(Fixed const & other);
		bool operator<(Fixed const & other);
		bool operator>=(Fixed const & other);
		bool operator<=(Fixed const & other);
		bool operator==(Fixed const & other);
		bool operator!=(Fixed const & other);

		Fixed operator+(Fixed const & other);
		Fixed operator-(Fixed const & other);
		Fixed operator*(Fixed const & other);
		Fixed operator/(Fixed const & other);

		Fixed & operator++();
		Fixed operator++(int);
		Fixed & operator--();
		Fixed operator--(int);

		static Fixed & min(Fixed & one, Fixed & two);
		static Fixed const & min(Fixed const & one, Fixed const & two);
		static Fixed & max(Fixed & one, Fixed & two);
		static Fixed const & max(Fixed const & one, Fixed const & two);

	private:
		int _raw_bits;
		static const int _fractional_bits;
};

std::ostream & operator<<(std::ostream & o, const Fixed & object);

#endif
