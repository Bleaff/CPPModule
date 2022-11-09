/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:33:17 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/26 18:43:58 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
		return 0;
	}
	Harl instance;
	for (int i = 1; i < argc; i++)
	{
		instance.filterIt(argv[i]);
		std::cout << "____________________________________________________" << std::endl;
	}
	return 0;
}