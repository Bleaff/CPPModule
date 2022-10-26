/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:33:21 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/26 18:19:21 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );
	void filterIt (std::string level );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};



#endif