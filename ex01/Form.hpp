#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
	public:
		Form(int minimum);
		void beSigned(Bureaucrat b);
		void signForm(void);
		void GradeTooHighException(void);
		void GradeTooLowException(void);
	private:
		std::string name;
		bool sign;
		int minimum;
		int grade;

};
std::ostream& operator<<(std::ostream& ofile, Form f);

#endif