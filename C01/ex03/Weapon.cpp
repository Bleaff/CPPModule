/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:43:54 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 17:52:17 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(/* args */){}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~ Weapon(){}

std::string Weapon::getType( void )
{ 
    return (this->_type);
}
void Weapon::setType( std::string type ){ this->_type = type; }
