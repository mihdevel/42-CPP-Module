#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat jeny = Bureaucrat("Jeny", 1);
		std::cout << jeny << std::endl;
		jeny.decrementGrade(1);
		std::cout << jeny << std::endl;
		jeny.incrementGrade(1);
		std::cout << jeny << std::endl;
		jeny.incrementGrade(1);
		std::cout << jeny << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "----------------------------" << std::endl << std::endl;
	try
	{
		Bureaucrat sasha = Bureaucrat("Sasha", 150);
		std::cout << sasha << std::endl;
		sasha.incrementGrade(1);
		std::cout << sasha << std::endl;
		sasha.decrementGrade(1);
		std::cout << sasha << std::endl;
		sasha.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "----------------------------" << std::endl << std::endl;
	try
	{
		Bureaucrat misha = Bureaucrat("Misha", 0);
		std::cout << misha << std::endl;
		misha.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "----------------------------" << std::endl << std::endl;
	try
	{
		Bureaucrat katy = Bureaucrat("Katy", 151);
		std::cout << katy << std::endl;
		katy.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}