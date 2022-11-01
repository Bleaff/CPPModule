/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:23:52 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 16:54:16 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::name = "Default_clap_name";
	this->name = "Default";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap >>> Classic constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
{
	ClapTrap::name = _name + "_clap_name";
	this->name = _name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap >>> Classic name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	std::cout << "DiamondTrap >>> Classic coping constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap >>> Destructor called" << std::endl;}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap >>> Operator = called" << std::endl;
	this->name = rhs.getName();
	this->attack_damage = rhs.getAD();
	this->energy_points = rhs.getEP();
	this->hit_points = rhs.getHP();
	this->gateMode = rhs.getGate();
	return (*this);
}
void DiamondTrap::whoAmI( void ) const
{
	std::cout << "I am " << this->name << " and my ClapTrap name is "
		<< ClapTrap::name << std::endl;
}

void DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}
