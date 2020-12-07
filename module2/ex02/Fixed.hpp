/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:08:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/05 11:52:15 by tguilbar         ###   ########.fr       */
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
	Fixed	operator+(Fixed const & add);
	Fixed	operator-(Fixed const & sub);
	Fixed	operator*(Fixed const & mult);
	Fixed	operator/(Fixed const & div);
	bool	operator<(Fixed const & comp) const;
	bool	operator>(Fixed const & comp) const;
	bool	operator>=(Fixed const & comp) const;
	bool	operator<=(Fixed const & comp) const;
	bool	operator==(Fixed const & comp) const;
	bool	operator!=(Fixed const & comp) const;
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed		&min(Fixed & a, Fixed & b);
    const static Fixed	&min(Fixed const & a, Fixed const & b);
    static Fixed		&max(Fixed & a, Fixed & b);
    const static Fixed	&max(Fixed const & a, Fixed const & b);

	private :
	int value;
	const static int nbBits = 8;

};

ostream& operator<<(ostream& os, Fixed const & to_draw);

#endif
