#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ):
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Standard constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ):
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ):
	Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "Can't copy anything" << std::endl;
	rhs.getTarget();
	if (ShrubberyCreationForm::verbose)
		std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;
	return *this;
}

const std::string	&ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	std::ofstream	myfile;
	std::string		fileName = this->_target + "_shrubbery";

	this->checkExecutability(executor);
	myfile.open(fileName.c_str(), std::ios::out);
    myfile << "\n\
                        ^^^        \n\
                      ^^^^^^^       \n\
                      ^^^^^^^^       \n\
                        ^^^^^         \n\
                          |         \n\
                          |         \n\
                   \n " << std::endl;
	myfile.close();
	std::cout << "Created the shrug in " << this->_target << "_shrubbery"
		<< std::endl;
}

bool	ShrubberyCreationForm::verbose = false;

