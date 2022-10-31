/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:49:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/31 19:18:52 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap s("S");
	s.attack("ad");
	s.guardGate();
	s.takeDamage(500);
	s.beRepaired(10);
	s.attack("Sany");

	return (0);
}