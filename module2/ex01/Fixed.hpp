/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:08:00 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 11:56:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
	Fixed();
	~Fixed();
	Fixed(Fixed const & toCopy);
	Fixed(int const p_value);
	Fixed(float const p_value);
	void	operator=(Fixed const & toCopy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private :
	int value;
	const static int nbBits = 8;

};

std::ostream& operator<<(std::ostream& os, Fixed const & to_draw);

#endif
