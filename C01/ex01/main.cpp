/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:15:07 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 13:43:42 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(5, "Zombo");
    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << ":";
        zombies[i].announce();
    }
    delete []zombies;
    return (0);
}