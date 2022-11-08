#include "Bureaucrat.hpp"
	
	Bureaucrat::Bureaucrat()
	{
		name="default";
		grade = 150;
	}
	Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
	{
		
	}
	Bureaucrat::Bureaucrat(Bureaucrat const &other);
    Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other);
	Bureaucrat::~Bureaucrat();
	std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance);