#include <iostream>
#include "OtherAnimal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *aniray[50];
	for (size_t i = 0; i < 50; i++)
	{
		if (i % 2)
			aniray[i] = new Cat();
		else
			aniray[i] = new Dog();
	}
	for (size_t i = 0; i < 50; i++)
		aniray[i]->makeSound();
	for (size_t i = 0; i < 50; i++)
		delete aniray[i];
	delete j;
	delete i;
	std::cout << "Afterthouths\n";
	Dog ba;
	{
		Dog b = ba;
	}
	Dog c(ba);

	std::cout << "Afterthouths\n";
	return 0;
}