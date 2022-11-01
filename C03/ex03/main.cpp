/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:49:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 16:48:32 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt("Dinny");
	dt.whoAmI();
	std::cout << dt.getAD() << " - attack damage, " << dt.getEP() << "- energy points, " << dt.getHP() << "- hit points." << std::endl;
	dt.attack("Someone");
	return (0);
}