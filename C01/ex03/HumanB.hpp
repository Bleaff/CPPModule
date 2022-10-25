/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:52:32 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 17:52:33 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_wp;
    std::string _name;
public:
    HumanB(std::string name);
    HumanB();
    ~HumanB();
    void attack();
    void setWeapon(Weapon &wp);
};

#endif
