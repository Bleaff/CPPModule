#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	virtual ~WrongAnimal(void);

	WrongAnimal &operator=(WrongAnimal const &other);
	std::string getType(void) const;
	void makeSound(void) const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const & other);
		~WrongCat();
		WrongCat &operator=(WrongCat const &rhs);	
		void makeSound(void) const;

};


#endif