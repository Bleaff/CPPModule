/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:01:04 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/24 21:55:32 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret) :first_name(f_name),last_name(l_name), nickname(n_name), phone_number(p_number), darkest_secret(d_secret){}

Contact::Contact(){};

Contact::~Contact(){}

std::string	Contact::GetCuttedField(std::string field)
{
	if (field.size() > 10)
	{
		std::string new_f = field;
		new_f = field.substr(0, 9);
		new_f = new_f.append(".");
		return (new_f);
	}
	return (field);
}

void Contact::PrintNames()
{
	std::cout.width(10);
	std::cout << std::setw(10) << GetCuttedField(this->first_name) << "|" << std::setw(10) << GetCuttedField(this->last_name) << "|" << std::setw(10) << GetCuttedField(this->nickname) << "|"<<std::endl;
}

void Contact::PrintFields()
{
	std::cout << "First name     >> " << this->first_name     << std::endl << 
		    	 "Last name      >> " << this->last_name      << std::endl << 
				 "Nickname       >> " << this->nickname       << std::endl << 
				 "Phone number   >> " << this->phone_number   << std::endl << 
				 "Darkest secret >> " << this->darkest_secret << std::endl;
}
