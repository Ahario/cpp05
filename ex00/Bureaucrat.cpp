#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try
	{
		if (grade <= 0 || grade >= 151)
			throw 0;
		this->name = name;
		this->grade = grade;
	}
	catch(int expn)
	{
		if (grade <= 0)
			GradeTooHighException();
		else if (grade >= 151)
			GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "Warning: Your Grade is Too High" << std::endl;
}
void Bureaucrat::GradeTooLowException()
{
	std::cout << "Warning: Your Grade is Too Low" << std::endl;
}
std::string Bureaucrat::getName()
{
	return (this->name);
}
int Bureaucrat::getGrade()
{
	return (this->grade);
}
void Bureaucrat::decrementGrade()
{
	try
	{
		this->grade += 1;;
		if (getGrade() >= 151)
			throw 0;
	}
	catch (int expn)
	{
		this->grade -= 1;
		GradeTooLowException();
	}
}
void Bureaucrat::incrementGrade()
{
	try
	{
		this->grade -= 1;
		if (getGrade() <= 0)
			throw 0;
	}
	catch(int expn)
	{
		this->grade += 1;
		GradeTooHighException();
	}
}

std::ostream& operator<<(std::ostream& ofile, Bureaucrat Bureau)
{
	ofile << Bureau.getName() << ", " << "bureaucrat grade " << Bureau.getGrade() << ".";
	return (ofile);
}

