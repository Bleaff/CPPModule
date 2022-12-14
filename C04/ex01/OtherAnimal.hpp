#ifndef OTHER_ANIMAL_HPP
#define OTHER_ANIMAL_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	private:
		Brain *brainzzz;
	public:
		Cat();
		Cat(Cat const & other);
		~Cat();
		Cat &operator=(Cat const &rhs);	
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

class Dog: public Animal
{
	private:
		Brain *brainzzz;
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();
		Dog &operator=(Dog const &rhs);
		void makeSound(void) const;
		Brain *getBrain(void) const;

};
#endif