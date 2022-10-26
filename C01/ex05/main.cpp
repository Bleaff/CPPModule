/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:33:17 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/26 17:33:18 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl instance;
	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	instance.complain("errnonnnn");
	instance.complain("");
	return 0;
}