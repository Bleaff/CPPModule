#ifndef OTHER_ANIMAL_HPP
#define OTHER_ANIMAL_HPP
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const & other);
		~Cat();
		Cat &operator=(Cat const &rhs);	

};

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();
		Dog &operator=(Dog const &rhs);	

};
#endif