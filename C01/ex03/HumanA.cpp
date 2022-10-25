/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:40:54 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 17:52:47 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA:: HumanA(std::string name, Weapon &wp): _wp(wp), _name(name){}

HumanA::~HumanA(){}

void HumanA::attack()   
{
    std::cout << this->_name << " attacks with their " << (this->_wp).getType() << std::endl;
}
