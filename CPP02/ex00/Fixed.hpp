#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed const &fx);
		~Fixed();
		Fixed& operator=(Fixed& rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int raw_bits;
		static const int fractional_bits = 8;
};

#endif //EX00_FIXED_H
