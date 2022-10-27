/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/27 21:04:49 by bleaf            ###   ########.fr       */
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
    this->attack_damage = other.getAD();
    this->hitp_points = other.getHP();
    this->energy_points = other.getEP();
}

ClapTrap::~ClapTrap(){}

int ClapTrap::getHP(void) const
{
    return (this->hitp_points);
}

int ClapTrap::getEP(void) const
{
    return (this->energy_points);
}

int ClapTrap::getAD(void) const
{
    return (this->attack_damage);
}

std::string ClapTrap::getName(void) const
{
    return (this->name);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hitp_points = other.getHP();
    this->energy_points = other.getEP();
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points >= 1)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    std::cout << "Not enough energy points to complete the attack!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount);

void ClapTrap::eRepaired(unsigned int amount);