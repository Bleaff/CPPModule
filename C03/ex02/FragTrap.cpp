/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 01:49:58 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name)
{
    std::cout << ">>Classic constructor FragTrap called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    this->name = _name;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << ">>Coping constructor FragTrap called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
}

FragTrap::~FragTrap(){std::cout << ">>Destructor FragTrap called" << std::endl;}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << ">>Operator = called" << std::endl;
    this->name = other.getName();
    this->attack_damage = other.getAD();
    this->hit_points = other.getHP();
    this->energy_points = other.getEP();
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy_points >= 1 && this->hit_points > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "Not enough energy or hit points to complete the attack!"<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give five to " << this->getName() << std::endl;
}
