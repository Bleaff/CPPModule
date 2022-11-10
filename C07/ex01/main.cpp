/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:16:02 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/10 19:21:33 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(T const & x) {std :: cout << x << std :: endl; return ;}

int main(void) {
	{
		int tab[] = {0, 1, 2, 3, 4};	
		iter(tab, 5, print);
	}
	{
		float tab[] = {3.5, 1.5, 2.0, 3.789, 4.21};
		char tab1[] = "hello";
		std :: string tab2[] = {"hello", "world", "and", "you", "!"};
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab, 5, print);
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab1, 5, print);
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab2, 5, print);
	}
	return 0;
}