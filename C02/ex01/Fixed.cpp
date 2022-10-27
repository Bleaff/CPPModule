#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Default constructor coping called" << std::endl;
	this->value = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called!" <<std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "Get row bits" << std::endl; 
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "Set row bits" << std::endl;
	this->value = raw;
}