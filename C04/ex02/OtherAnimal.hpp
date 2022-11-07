#ifndef OTHER_ANIMAL_HPP
#define OTHER_ANIMAL_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat: public AAnimal
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

class Dog: public AAnimal
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