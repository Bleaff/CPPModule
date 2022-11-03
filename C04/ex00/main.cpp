#include <iostream>
#include "OtherAnimal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << "______________________Wrong one_____________________________" << std::endl;
	std::cout << std::endl;
	const WrongAnimal *wa = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();
	std::cout << std::endl;
	std::cout << wa->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	std::cout << std::endl;
	std::cout <<  "Wrong animal voice -> " << std::endl;
	wa->makeSound();
	std::cout <<  "Wrong cat voice -> " << std::endl;
	wc->makeSound();
	std::cout << std::endl;
	delete wc;
	delete wa;
	return 0;
}