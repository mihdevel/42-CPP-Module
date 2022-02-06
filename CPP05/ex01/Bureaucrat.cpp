#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(_lowestGrade)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade
(grade)
{
	checkGrade();
	std::cout << "Bureaucrat standard constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat assignement operator called" << std::endl;
	this->_grade = rhs._grade;
	std::cout << "Name is const and can't be overwritten, only grade was copied"
			  << std::endl;
	return *this;
}

const std::string &Bureaucrat::getName(void)
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(int quantity)
{
	this->_grade -= quantity;
	checkGrade();
}

void Bureaucrat::decrementGrade(int quantity)
{
	this->_grade += quantity;
	checkGrade();
}

bool	Bureaucrat::signForm(Form &form)
{
	if (form.beSigned(*this))
	{
		std::cout << this->_name << " signs form " << form.getName()
				  << std::endl;
		return true;
	}
	else
	{
		std::cout << this->_name << " cannot sign form " << form.getName()
				  << " because their grade is not high enough" << std::endl;
		return false;
	}
}

bool	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.checkExecutability(*this);
		std::cout << this->_name << " executes form " << form.getName()
				  << std::endl;
		return true;
	}
	catch (Form::CantExecuteForm &e)
	{
		std::cout << e.what() << std::endl;
		return false;
	}
}

void Bureaucrat::checkGrade(void)
{
	if (this->_grade < Bureaucrat::_highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::_lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream &ost, Bureaucrat & instance)
{
	ost << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return ost;
}