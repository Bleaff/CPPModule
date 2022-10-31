/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/31 19:15:56 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << ">>Classic constructor ScavTrap called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->name = _name;
    this->gateMode = false;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << ">>Coping constructor ScavTrap called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
    this->gateMode = other.getGate();
}

ScavTrap::~ScavTrap(){std::cout << ">>Destructor ScavTrap called" << std::endl;}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << ">>Operator = called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
    this->gateMode = other.getGate();
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
bool ScavTrap::getGate() const {return this->gateMode;}

void ScavTrap::guardGate()
{
    std::cout << "Change gate state to ";
    if (this->gateMode)
    {
        this->gateMode = false;
        std::cout <<"Inactive" << std::endl;
        return ;
    }
    this->gateMode = true;
    std::cout <<"Active" << std::endl;
}
