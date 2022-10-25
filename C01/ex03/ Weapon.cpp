/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:43:54 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 15:54:12 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(/* args */){}

Weapon::~ Weapon(){}

const std::string& Weapon::getType( void ){ return (const &this->_type); }
void Weapon:: setType( std::string type ){ this->_type = type; }
