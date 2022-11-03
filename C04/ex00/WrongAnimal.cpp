#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default animal constructor called!" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void){std::cout << "Default animal destructor called!" << std::endl;}

std::string WrongAnimal::getType(void) const {return (this->type);}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes sound!" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "\"Meow\" makes cat" << std::endl;
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat-constructor (basic)" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & other)
{
    std::cout << "WrongCat-constructor (coping)" << std::endl;
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat-destructor (basic)" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}
