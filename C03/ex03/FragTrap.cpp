/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:09 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 16:47:05 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap >> Classic constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    this->name = "Deafault";
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "FragTrap >> Classic name constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
    std::cout << "FragTrap >> Coping constructor called" << std::endl;
}

FragTrap::~FragTrap(){std::cout << "FragTrap >> Destructor called" << std::endl;}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << "Fragtrap >> Operator = called" << std::endl;
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
