/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:14:58 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 13:32:35 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie( void );
    Zombie( std::string name );
    ~Zombie();
    void announce( void );
    void SetName(std::string name_);
};

Zombie* zombieHorde( int N, std::string name );

#endif