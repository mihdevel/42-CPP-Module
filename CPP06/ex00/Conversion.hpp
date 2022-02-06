#ifndef EX00_CONVERSION_HPP
# define EX00_CONVERSION_HPP

# include <iostream>
# include <iomanip>

class Conversion
{
	public:
		Conversion( const char *argv);
		~Conversion(void);
		void    cast(void);

		class NotDisplaylibleException : public std::exception
		{
		public:
			const char* what() const throw();
		};

		class WrongArgvException : public std::exception
		{
		public:
			const char* what() const throw();
		};

		class Impossible : public std::exception
		{
		public:
			const char* what() const throw();
		};

	private:
		int         flag_point;
		float       f_result;
		char        c_result;
		double      d_result;
		int         i_result;
		std::string string_value;
		int         nan_flag;
		int         flag_char_minis;
		int         flag_non_disp;
		Conversion  (void);
		Conversion  ( const Conversion &src);
		Conversion  &operator= (const Conversion &rhs);
		void        pars(void);
		char        to_char(void);
		int         to_int(void);
		double      to_double(void);
		float       to_float(void);
};

#endif //EX00_CONVERSION_HPP