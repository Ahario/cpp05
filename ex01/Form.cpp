#include "Form.hpp"

Form::Form(int minimum)
{
	this->sign = false;
	this->minimum = minimum;
}

void Form::beSigned(Bureaucrat b)
{
	try
	{
		if (b.getGrade() >= 1 && b.getGrade() <= 150 && b.getGrade() >= this->minimum)
		{
			this->grade = b.getGrade();
			this->name = b.getName();
			this->sign = true;
		}
		else
		{
			this->sign = false;
			throw false;
		}
	}
	catch(bool expn)
	{
		if (b.getGrade() >= 151 || b.getGrade() >= this->minimum)
			GradeTooLowException();
		else
			GradeTooHighException();
	}
}

void Form::signForm()
{
	try
	{
		if (this->sign == true)
			std::cout << this->name << " signed" << 
	}
	catch(bool expn)
	{
		
	}
	
}

void Form::GradeTooHighException()
{
	std::cout << "Warning: Your Grade is Too High" << std::endl;
}
void Form::GradeTooLowException()
{
	std::cout << "Warning: Your Grade is Too Low" << std::endl;
}

std::ostream& operator<<(std::ostream& ofile, Bureaucrat bureau)
{
	
}