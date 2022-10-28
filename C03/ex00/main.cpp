/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:49:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/28 20:59:50 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap i1( "Clappy" );
	ClapTrap i2( i1 );
	ClapTrap i3( "Scibidy" );
	ClapTrap i4 = i3;

	i1.attack("Scibidi");
	std::cout << i2.getName() << std::endl;
	i3.takeDamage(10000);
	i3.attack("Somebody");
	i3.beRepaired(900);
	i4.takeDamage(9);
	for (int i = 0; i < 11; i++)
	{
		i4.beRepaired(1);
	}
	return (0);
}