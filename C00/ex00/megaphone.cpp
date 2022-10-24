/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:47:32 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/21 18:47:34 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else{
	for(int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			std::cout << char(toupper(argv[i][j]));
		}
	}
	std::cout << std::endl;
	}

	return (0);
}
