/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OtherAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:52:51 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/07 21:09:44 by bleaf            ###   ########.fr       */
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
    this->brainzzz = new Brain();
    this->type = "Cat";
}

Cat::Cat(Cat const & other):Animal(other)
{
    std::cout << "Cat-constructor (coping)" << std::endl;
    this->brainzzz = new Brain();
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat-destructor (basic)" << std::endl;
    delete this->brainzzz;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        delete brainzzz;
        this->brainzzz = new Brain(*rhs.getBrain());
        this->type = rhs.getType();
    }
    return (*this);
}

Dog::Dog()
{
    this->brainzzz = new Brain();
    std::cout << "Dog-constructor (basic)" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & other):Animal(other)
{
    std::cout << "Dog-constructor (coping)" << std::endl;
    this->brainzzz = new Brain();
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog-destructor (basic)" << std::endl;    
    delete this->brainzzz;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        delete this->brainzzz;
        this->brainzzz = new Brain(*rhs.getBrain());
        this->type = rhs.getType();
    }
    return (*this);
}

Brain *Cat::getBrain(void) const
{
    return (this->brainzzz);
}

Brain *Dog::getBrain(void) const
{
    return (this->brainzzz);
}
