#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Standard constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( void ):
	Form("PresidentialPardonForm", 25, 5), _target("")
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ):
	Form("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	if (PresidentialPardonForm::verbose)
		std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.getTarget();
	if (PresidentialPardonForm::verbose)
		std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;
	return *this;
}

const std::string	&PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	this->checkExecutability(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}

bool	PresidentialPardonForm::verbose = false;