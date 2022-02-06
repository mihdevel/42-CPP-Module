#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		ira("ira", 1);
	Bureaucrat		masha("masha", 40);
	Bureaucrat		mark("mark", 150);

	try
	{
		form = new PresidentialPardonForm("00");
		form->execute(ira);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new PresidentialPardonForm("01");
		form->beSigned(ira);
		form->execute(ira);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new RobotomyRequestForm("02");
		form->beSigned(ira);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		form->execute(masha);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		form = new ShrubberyCreationForm("03");
		form->beSigned(ira);
		form->execute(masha);
		form->execute(mark);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}