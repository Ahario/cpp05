#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;

class Form{
	public:
		
		Form(int minimum);
		void signForm(void);
		const char* GradeTooHighException(void);
		const char* GradeTooLowException(void);
		void beSigned(Bureaucrat& a);
		std::string getName( void ) const;
			class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooHighException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};
		int	getMinimum( void ) const;
		bool	getSign( void ) const;
	private:
		std::string name;
		bool sign;
		int minimum;
		int grade;

};
std::ostream& operator<<(std::ostream& ofile, Form const& f);

#endif