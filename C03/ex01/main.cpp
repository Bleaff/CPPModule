/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:49:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/31 23:49:16 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "Now you will witness an incident in a bar between Django and the target he has been hunting for 3 months." << std::endl;
	ClapTrap *greengo = new ScavTrap("Django");
	greengo->attack("$5,000 goal");
	ScavTrap goal("$5,000 goal");
	goal.takeDamage(greengo->getAD());
	goal.attack("Django");
	greengo->takeDamage(goal.getAD());
	goal.takeDamage(greengo->getAD() * 5);
	goal.beRepaired(30);
	ScavTrap s("S");
	s.attack("ad");
	s.guardGate();
	s.takeDamage(500);
	s.beRepaired(10);
	s.attack("Sany");
	delete greengo;
	return (0);
}