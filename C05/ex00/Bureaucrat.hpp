#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
class Bureaucrat
{
private:
	std::string name;
	int grade;
public:


	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade is too high to increase it further!");
			}
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade is too low to decrease it further!");
			}
	};
	/*
		Constructors/destriuctors
	*/
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(Bureaucrat const &other);
 	~Bureaucrat();
	/*
		Operators
	*/
	Bureaucrat &operator=(Bureaucrat const &other);
	friend std::ostream& operator<<(std::ostream &os, Bureaucrat const &instance);
	/*
		Getters
	*/
	std::string getName(void) const;
	int 		getGrade(void) const;
	/*
		Increment and decrement
	*/
	void increase(void);
	void decrease(void);
};
#endif