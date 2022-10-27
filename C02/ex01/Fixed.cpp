#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(int const init)
{
	std::cout << "Default constructor integer called" << std::endl;
	this->value = (init << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Default constructor float called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
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

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
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

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}