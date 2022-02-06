#ifndef EX01_FORM_HPP
# define EX01_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form( const std::string &name, int gradeToSign, int gradeToExecute );
		Form( const Form &src );
		~Form( void );

		Form	&operator=( const Form &rhs );

		const std::string	&getName( void ) const;
		int					getSignGrade( void ) const;
		int					getExecuteGrade( void ) const;
		bool				isSigned( void ) const;

		void	checkGrades( void ) const ;
		void	checkExecutability( const Bureaucrat &bureaucrat ) const ;
		bool	beSigned( const Bureaucrat &bureaucrat );

		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade you set is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char* what() const throw()
			{
				return ("The grade you set is too low");
			}
		};

		class CantExecuteForm : public std::exception
		{
		public:
			virtual const char* what() const throw()
			{
				return ("The form can't be executed");
			}
		};

	private:

		Form( void );

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;

		static const int	_lowestGrade = 150;
		static const int	_highestGrade = 1;
};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif //EX01_FORM_HPP