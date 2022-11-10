#include "Span.hpp"
#include <iostream>

# define HUGE_ 10000

int main(void) {
	std :: cout << "-----SUBJECT_TEST-----" << std :: endl;
	{
		try {
			Span sp = Span(5);
			
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(12);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(6);
		}
		catch (std :: exception & e) {
			std :: cout << e.what() << std :: endl;
		}
		try {
			Span sp = Span(5);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std :: exception & e) {
			std :: cout << e.what() << std :: endl;
		}
		try {
			Span sp = Span(5);

			sp.addNumber(5);
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std :: exception & e) {
			std :: cout << e.what() << std :: endl;
		}
		try {
			Span sp = Span(5);

			sp.addNumber(5);
			sp.addNumber(19);
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std :: exception & e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-----WIDE_RANGE_TEST-----" << std :: endl;
	{
		std :: vector<int> arr;
		for (int i = 0; i < HUGE_; i++)
			arr.push_back(rand() % (HUGE_ * 10));
		Span sp(arr.begin(), arr.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	std :: cout << "-----Assignation_TEST-----" << std :: endl;
	{
		Span sp = Span(5);
			
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(12);

		Span sp_new = Span(5);
			
			sp_new.addNumber(1);
			sp_new.addNumber(2);

		
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		sp = sp_new;

		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

	}
	return 0;
}