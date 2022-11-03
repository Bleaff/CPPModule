#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(Animal const &other);
	virtual ~Animal(void);

	Animal &operator=(Animal const &other);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};
#endif
