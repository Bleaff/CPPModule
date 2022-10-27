/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/27 19:50:58 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name)
{
    hitp_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    this->name = other.getName();
}

ClapTrap::~ClapTrap(){}
int getHP(void)

{


}

int getEP(void)
{


}

int getAD(void)
{

}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other);

void ClapTrap::attack(const std::string& target);

void ClapTrap::takeDamage(unsigned int amount);

void ClapTrap::eRepaired(unsigned int amount);