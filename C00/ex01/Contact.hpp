/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 01:01:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/24 21:31:55 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact
{
private:
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	std::string	GetCuttedField(std::string field);
public:
	Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret);
	Contact();
	~Contact();
	void	PrintNames();
	void	PrintFields();
};
#endif
