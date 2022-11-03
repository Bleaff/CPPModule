/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:52:51 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/03 16:44:00 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OtherAnimal.hpp"

void Dog::makeSound(void) const
{
    std::cout << "\"Bark\" makes dog" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "\"Meow\" makes cat" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat-constructor (basic)" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & other)
{
    std::cout << "Cat-constructor (coping)" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat-destructor (basic)" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

Dog::Dog()
{
    std::cout << "Dog-constructor (basic)" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & other)
{
    std::cout << "Dog-constructor (coping)" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog-destructor (basic)" << std::endl;    
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}
