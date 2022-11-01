/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:23:55 by bleaf             #+#    #+#             */
/*   Updated: 2022/11/01 16:48:56 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{	
	private:
		std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string _name);
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap(void);
		DiamondTrap &operator=( DiamondTrap const & rhs );
		void whoAmI(void) const;
		void attack( const std::string &target );
};
#endif