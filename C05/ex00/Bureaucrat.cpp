#include "Bureaucrat.hpp"
/*
	Constructors/destriuctors
*/
Bureaucrat::Bureaucrat()
{
	name="default";
	grade = 150;
	std::cout << "Constrictor base" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	std::cout << "Constrictor name/grade" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
	else
		grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << "Constrictor coping" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout <<"Who calls destroyer????" << std::endl;
}
/*
	Operators
*/
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << "Operator= was called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		grade = other.grade;
	}
	return (*this);
}
std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance)
{
	os <<instance.getName() <<", bureaucrat grade "<< instance.getGrade() << ".";
	return (os);
}
/*
	Getters
*/
std::string Bureaucrat::getName(void) const
{
	return (this->name);
}
int 		Bureaucrat::getGrade(void) const
{
	return (this->grade);
}
void Bureaucrat::increase(void)
{
	if (grade < 2)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}
void Bureaucrat::decrease(void)
{
	if (grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}
