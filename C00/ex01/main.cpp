/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:31:57 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/24 21:31:57 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
    PhoneBook book;
    std::string input;
    while(true)
    {
        std::cout << "Choose one of the command ADD SEARCH EXIT" << std::endl;
        std::cin >> input;
        if (input.compare("ADD") == 0)
            book.AddContact();
        else if (input.compare("SEARCH") == 0)
            book.SearchContact();
        else if (input.compare("EXIT") == 0)
            break ;
    }
}