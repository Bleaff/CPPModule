/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:43:02 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/25 22:12:02 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fstream"
#include "Inputer.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "ERORR: Wrong number of arguments!" << std::endl;
        return (-1);
    }
    Inputer inputer(argv[1], argv[2], argv[3]);
    inputer.readFile();
    inputer.writeFile();
    return (0);
}