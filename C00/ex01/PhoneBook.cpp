/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:32:03 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/24 21:41:26 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->size = 0;
    this->fullness = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::GetContactInfoByIndex(int index)
{
    if (index >= 0 && index <= this->size && std::isdigit(index))
    {
        this->book[index].PrintFields();
    }
    else
        std::cout << "Wrong index!" << std::endl;
    std::cin.clear();
    std::cin.ignore();
}

void PhoneBook::AddContact()
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "Enter First Name: ";
    std::cin >> first_name;
    std::cout << "Enter Last Name: ";
    std::cin >>  last_name;
    std::cout << "Enter NickName: ";
    std::cin >> nickname;
    std::cout << "Enter Phone number: ";
    std::cin >> phone_number;
    std::cout << "Enter Darkest Secret: ";
    std::cin >> darkest_secret;
    this->book[fullness] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
    this->fullness += 1;
    this->fullness %= 8;
    if (this->size < 8)
        this->size++;
}

void PhoneBook::SearchContact()
{
    int inpt;

    std::cout << "|-------------------------------------------|" << std::endl 
              << "|  index   |First Name|SecondName| NickName |" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|         " << i << "|";
        this->book[i].PrintNames();
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "Choose one by the index: ";
    std::cin >> inpt;
    this->GetContactInfoByIndex(inpt);
}
