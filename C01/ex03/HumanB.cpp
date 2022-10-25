/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:13 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 17:52:30 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_wp = NULL;
}
HumanB::HumanB(){}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_wp->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
    this->_wp = &wp;
}
