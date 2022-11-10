/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:37:48 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/10 16:37:48 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	int random = rand() % 3;
	Base *b = NULL;

	switch (random) {
		case 0:
			b = new A();
			break;
		case 1:
			b = new B();
			break;
		case 2:
			b = new C();
			break;
	}
	return b;	
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p)) {
		std :: cout << "A" << std :: endl;
	}
	else if (dynamic_cast<B *>(p)) {
		std :: cout << "B" << std :: endl;
	}
	else if (dynamic_cast<C *>(p)) {
		std :: cout << "C" << std :: endl;
	}
}	

void identify(Base& p) {

	try {
		A *a = &dynamic_cast<A &>(p);
		static_cast<void>(a);
		std :: cout << "A" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
	try {
		B *b = &dynamic_cast<B &>(p);
		static_cast<void>(b);
		std :: cout << "B" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
	try {
		C *c = &dynamic_cast<C &>(p);
		static_cast<void>(c);
		std :: cout << "C" << std :: endl;
	}
	catch (std :: exception &e) {
		static_cast<void>(e);
	}
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		std :: cout << "------------" << i + 1 << "------------" << std :: endl;
		Base * b = generate();
		std :: cout << "Pointer: ";
		identify(b);
		std :: cout << "Reference: ";
		identify(*b);
		delete b;
	}
	return 0;
}