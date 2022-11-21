#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat a("Allan", 1);

	a.incrementGrade();
	a.decrementGrade();
	Bureaucrat b("Yeo", 150);
	b.decrementGrade();
	b.incrementGrade();
	Bureaucrat c("error", -1);
	Bureaucrat d("Error", 151);

	Bureaucrat e("normal", 42);
	e.decrementGrade();
	e.incrementGrade();
	std::cout << e << std::endl;
	std::cout << a << std::endl;
	std::cout << d << std::endl;
}