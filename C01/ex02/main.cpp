/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:46 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 14:59:33 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_headers(std::string str)
{
    unsigned long width = 0;
    if (str.length() % 2)
        width++;
    width += str.length() * 2;
    std::cout << "|";
    for (unsigned long i = 0; i < (width - 2); i++)
    {
        std::cout << "-";
    }
    std::cout << "|" << std::endl;

    std::cout << "|";
    for (unsigned long i = 0; i < (width - str.length()) / 2; i++)
    {
        std::cout << " ";
    }
    std::cout << str;
    for (unsigned long i = 0; i < ((width - str.length()) / 2 - 2); i++)
    {
        std::cout << " ";
    }
    std::cout << "|" << std::endl;
    std::cout << "|";
    for (unsigned long i = 0; i < (width - 2); i++)
    {
        std::cout << "-";
    }
    std::cout << "|" << std::endl;
}

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    print_headers("Addresses:");
    std::cout << "Basic string: " << &str << std::endl;
    std::cout << "Pointer string: " << &stringPTR << std::endl;
    std::cout << "Reference string: " << &stringREF << std::endl;
    print_headers("Values:");
    std::cout << "Basic string: " << str << std::endl;
    std::cout << "Pointer string: " << stringPTR << std::endl;
    std::cout << "Reference string: " << stringREF << std::endl;
    return (0);
}