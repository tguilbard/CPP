/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:08:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/04 11:52:10 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
using namespace std;

class Fixed
{
	public :
	Fixed();
	~Fixed();
	Fixed(Fixed const & toCopy);
	Fixed(int const p_value);
	Fixed(float const p_value);
	Fixed	operator=(Fixed const & toCopy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private :
	int value;
	const static int nbBits = 8;

};

ostream& operator<<(ostream& os, Fixed const & to_draw);

#endif
