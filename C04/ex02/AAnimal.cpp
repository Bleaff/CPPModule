#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default animal constructor called!" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const &other)
{
	*this = other;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

AAnimal::~AAnimal(void){std::cout << "Default animal destructor called!" << std::endl;}

std::string AAnimal::getType(void) const {return (this->type);}

// void AAnimal::makeSound(void) const
// {
// 	std::cout << "AAnimal makes sound!" << std::endl;
// }