#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
class Bureaucrat
{
private:
	std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);
	~Bureaucrat();
	friend std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance);
};
#endif