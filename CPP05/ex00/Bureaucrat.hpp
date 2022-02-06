#ifndef EX00_BUREAUCRAT_HPP
# define EX00_BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

		Bureaucrat & operator=(const Bureaucrat & rhs);

		const std::string &getName(void);
		int getGrade(void);

		void incrementGrade(int quantity);
		void decrementGrade(int quantity);

		class GradeTooHighException :public std::exception
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

	private:
		const std::string _name;
		int 	_grade;
		static const int	_lowestGrade = 150;
		static const int	_highestGrade = 1;

		void	checkGrade(void);
};

std::ostream & operator<<(std::ostream &ost, Bureaucrat & instance);

#endif //EX00_BUREAUCRAT_HPP