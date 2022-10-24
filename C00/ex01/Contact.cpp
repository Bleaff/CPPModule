/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:01:04 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/23 23:43:00 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret) :first_name(f_name),last_name(l_name), nickname(n_name), phone_number(p_number), darkest_secret(d_secret){}

Contact::~Contact(){}

void Contact::print_names()
{
	std::cout.width(10);
	std::cout << std::setw(10) << this->first_name << "|" << this->last_name << "|" << this->nickname << std::endl;
}

int main()
{
	Contact inst = Contact("012345678910", "00000000000", "111111111111" , "2222222222222", "3333333333333");
	std::cout.width(10);
	std::cout << std::setw(10) << std::left << "0" << "|";
	inst.print_names();
}