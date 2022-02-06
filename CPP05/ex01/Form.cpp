#include "Form.hpp"

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute ):
		_name(name), _isSigned(false), _gradeSign(gradeToSign),
		_gradeExec(gradeToExecute)
{
	this->checkGrades();
	std::cout << "Form standard constructor called" << std::endl;
}

Form::Form( void ): _name(""), _isSigned(false),
					_gradeSign(Form::_lowestGrade), _gradeExec(Form::_lowestGrade)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form( Form const & src ): _name(src.getName()), _isSigned(src.isSigned()),
								_gradeSign(src.getSignGrade()), _gradeExec(src.getExecuteGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form::~Form( void )
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=( Form const & rhs )
{
	std::cout << "Form assignement operator called" << std::endl;
	this->_isSigned = rhs._isSigned;
	std::cout << "Name and grades are const and can't be overwritten, only isSi"
				 "gned was copied" << std::endl;
	return *this;
}

const std::string	&Form::getName( void ) const
{
	return this->_name;
}

int	Form::getSignGrade( void ) const
{
	return this->_gradeSign;
}

int	Form::getExecuteGrade( void ) const
{
	return this->_gradeExec;
}

bool	Form::isSigned( void ) const
{
	return this->_isSigned;
}

void	Form::checkExecutability( const Bureaucrat &bureaucrat ) const
{
	if (this->_isSigned == false
		|| bureaucrat.getGrade() < this->_gradeExec)
		throw Form::CantExecuteForm();
}

void	Form::checkGrades( void ) const
{
	if (this->_gradeExec < Form::_highestGrade
		|| this->_gradeSign < Form::_highestGrade)
		throw Form::GradeTooHighException();
	if (this->_gradeExec > Form::_lowestGrade
		|| this->_gradeSign > Form::_lowestGrade)
		throw Form::GradeTooLowException();
}

bool	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if (bureaucrat.getGrade() < this->_gradeSign)
	{
		this->_isSigned = true;
		return true;
	}
	else
	{
		this->_isSigned = false;
		return false;
	}
}

std::ostream &	operator<<( std::ostream & ostr, Form const & instance)
{
	ostr << instance.getName() << " Form has to be signed by a "
		 << instance.getSignGrade() << " grade and executed by a "
		 << instance.getExecuteGrade() << " grade, it is "
		 << ((instance.isSigned()) ? "" : "not ") << "signed";
	return ostr;
}