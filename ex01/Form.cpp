#include "Form.hpp"

Form::Form(int minimum)
{
	this->sign = false;
	this->minimum = minimum;
}

std::string	Form::getName( void ) const
{
	return (this->name);
}

int					Form::getMinimum( void ) const
{
	return (this->minimum);
}

bool				Form::getSign( void ) const
{
	return (this->sign);
}

void Form::beSigned(Bureaucrat& a)
{
	if (a.getGrade() > this->minimum)
	{
		throw (Form::GradeTooLowException());
		return ;
	}	
	this->sign = true;
}

const char* Form::GradeTooHighException()
{
	return ("Warning: Your Grade is Too High");
}
const char* Form::GradeTooLowException()
{
	return ("Warning: Your Grade is Too Low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Warning: Your Grade is Too High");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Warning: Your Grade is Too Low");
}

const char* Form::Exception::what() const throw()
{
	return ("Exception from Form");
}

std::ostream& operator<<(std::ostream& ofile, Form const& f)
{
	ofile << "In order to get " << f.getName() << " signed, you need " << f.getMinimum() << " and currently your state is " << f.getSign() << std::endl;
	return (ofile);
}