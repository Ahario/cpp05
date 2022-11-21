#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

class Bureaucrat {
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string getName(void);
		void GradeTooHighException();
		void GradeTooLowException();
		int getGrade(void);
		void decrementGrade();
		void incrementGrade();
	private:
		std::string name;
		int grade;
};
std::ostream& operator<<(std::ostream& ofile, Bureaucrat bureau);

#endif