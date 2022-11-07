#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);
	AAnimal(AAnimal const &other);
	virtual ~AAnimal(void);

	AAnimal &operator=(AAnimal const &other);
	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
};
#endif
