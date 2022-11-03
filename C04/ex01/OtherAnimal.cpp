/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:52:51 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/03 17:24:31 by bleaf            ###   ########.fr       */
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
    this->brainzzz = new Brain();
    std::cout << "Cat-constructor (basic)" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & other)
{
    this->brainzzz = other.brainzzz;
    std::cout << "Cat-constructor (coping)" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    delete this->brainzzz;
    std::cout << "Cat-destructor (basic)" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
    this->brainzzz = rhs.brainzzz;
    this->type = rhs.getType();
    return (*this);
}

Dog::Dog()
{
    this->brainzzz = new Brain();
    std::cout << "Dog-constructor (basic)" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & other)
{
    this->brainzzz = other.brainzzz;
    std::cout << "Dog-constructor (coping)" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    delete this->brainzzz;
    std::cout << "Dog-destructor (basic)" << std::endl;    
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->brainzzz = rhs.brainzzz;
    this->type = rhs.getType();
    return (*this);
}
