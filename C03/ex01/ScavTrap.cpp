/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/29 02:03:52 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : name(_name)
{
    std::cout << ">>Classic constructor ScavTrap called" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << ">>Coping constructor ScavTrap called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
}

ScavTrap::~ScavTrap(){std::cout << ">>Destructor ScavTrap called" << std::endl;}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << ">>Operator = called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points >= 1 && this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Not enough energy or hit points to complete the attack!"<< std::endl;
}
