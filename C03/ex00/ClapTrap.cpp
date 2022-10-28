/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/28 21:08:39 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name)
{
    std::cout << ">Classic constructor called" << std::endl;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << ">Coping constructor called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
}

ClapTrap::~ClapTrap(){std::cout << ">Classic destructor called" << std::endl;}

int ClapTrap::getHP(void) const
{
    return (this->hit_points);
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
    std::cout << ">Operator = called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points >= 1 && this->hit_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Not enough energy or hit points to complete the attack!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points -= amount;
    std::cout << this->name << " got " << amount << " of damage points" << std::endl;
    if (this->hit_points < 0)
    {
        this->hit_points = 0;
        std::cout << this->name <<" seems to be dead..." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points >= 1 && this->hit_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " repaired itself with the " << amount << " of the points!" << std::endl;
        this->hit_points += amount;
        this->energy_points--;
    }
    else if (this->hit_points == 0)
    {
        std::cout << "You think you're the smartest, chumba. You died!!!" << std::endl;
    }
    else
        std::cout << "Not enough energy to repair!"<< std::endl;
}