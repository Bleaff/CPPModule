/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:49:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 01:49:12 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "Now you will witness an incident in a bar between Django and the target he has been hunting for 3 months." << std::endl;
	ClapTrap *greengo = new FragTrap("Django");
	greengo->attack("$5,000 goal");
	FragTrap goal("$5,000 goal");
	goal.takeDamage(greengo->getAD());
	goal.attack("Django");
	greengo->takeDamage(goal.getAD());
	goal.takeDamage(greengo->getAD() * 5);
	goal.beRepaired(30);
	FragTrap s("S");
	s.attack("ad");
	s.highFivesGuys();
	s.takeDamage(500);
	s.beRepaired(10);
	s.attack("Sany");
	delete greengo;
	return (0);
}