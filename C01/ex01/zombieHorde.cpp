/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:14:52 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 13:34:17 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie_conveir = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie_conveir[i].SetName(name);
    }
    return (zombie_conveir);
}
