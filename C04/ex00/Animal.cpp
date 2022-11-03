#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default animal constructor called!" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal & Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

Animal::~Animal(void){std::cout << "Default animal destructor called!" << std::endl;}

std::string Animal::getType(void) const {return (this->type);}

void Animal::makeSound(void) const
{
	std::cout << "Animal makes sound!" << std::endl;
}