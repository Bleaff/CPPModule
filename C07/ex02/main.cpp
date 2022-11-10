#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    const Array<int> numbers1(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    std:: cout << numbers1[1];


    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std :: cout << "operator[] test passed" << std :: endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
	std :: cout << "operator= and copy constructor test passed" << std :: endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    Array<int> test_numbers(0);
    std :: cout << test_numbers.size() << std :: endl;
    try
    {
        test_numbers[0] = 10;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}