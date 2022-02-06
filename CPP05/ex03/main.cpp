#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	form = someRandomIntern.makeForm("this one doesn't exist", "Ira");
	if (form)
		delete form;
	form = someRandomIntern.makeForm("presidential pardon", "Masha");
	if (form)
		delete form;
	form = someRandomIntern.makeForm("shrubbery creation", "Mark");
	if (form)
		delete form;
	form = someRandomIntern.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
}