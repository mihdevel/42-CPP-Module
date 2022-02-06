#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( const std::string &target );
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &rhs );

		const std::string	&getTarget( void ) const;
		virtual void		execute( const Bureaucrat &executor ) const;

	private:
		const std::string		_target;

		ShrubberyCreationForm( void );
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP