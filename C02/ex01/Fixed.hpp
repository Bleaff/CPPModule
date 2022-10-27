/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:11:23 by bleaf             #+#    #+#             */
/*   Updated: 2022/10/27 11:31:59 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(int const init);
	Fixed(float const value);
	virtual ~Fixed();

	Fixed &operator=(Fixed const &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif