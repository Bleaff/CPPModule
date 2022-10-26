/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:58 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/26 17:33:29 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain( std::string level )
{
	void (Harl::*ptr_complain[])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error};

	std::string	levels[] = {"debug", "info", "warning", "error"};
    int i = 0;
    for (; i < 4 && levels[i] != level; i++);
    switch (i)
    {
        case 4:
            std :: cout << "No such level" << std :: endl;
            break;
        default:
            (this->*ptr_complain[i])();
    }
}

Harl::Harl(/* args */){}

Harl::~Harl(){}

void Harl::debug( void )
{
    std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << GRAY << "[INFO]    " << DEFAULT;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << YELLOW << "[WARNING] " << DEFAULT;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << RED << "[ERROR]   " << DEFAULT;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
