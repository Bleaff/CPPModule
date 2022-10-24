/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:53:58 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/24 21:32:10 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
	int 	fullness;
	void	PrintHead();
	Contact	book[8];
	int		size;
public:
	PhoneBook();
	~PhoneBook();
	void AddContact();
	void SearchContact();
	void GetContactInfoByIndex(int index);
};
#endif
