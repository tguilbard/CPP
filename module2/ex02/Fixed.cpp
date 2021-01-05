/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:13:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, Fixed const & to_draw)
{
	os << to_draw.toFloat();
	return os;
}

bool	Fixed::operator<(Fixed const & comp) const
{
	return (getRawBits() < comp.getRawBits());
}

bool	Fixed::operator>(Fixed const & comp) const
{
	return (getRawBits() > comp.getRawBits());
}

bool	Fixed::operator>=(Fixed const & comp) const
{
	return (getRawBits() >= comp.getRawBits());
}

bool	Fixed::operator<=(Fixed const & comp) const
{
	return (getRawBits() <= comp.getRawBits());
}

bool	Fixed::operator==(Fixed const & comp) const
{
	return (getRawBits() == comp.getRawBits());
}

bool	Fixed::operator!=(Fixed const & comp) const
{
	return (getRawBits() != comp.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & add)
{
	Fixed result;

	result.setRawBits(getRawBits() + add.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const & sub)
{
	Fixed result;

	result.setRawBits(getRawBits() - sub.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const & mult)
{
	return (Fixed(toFloat() * mult.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & div)
{
	return (Fixed(toFloat() / div.toFloat()));
}

Fixed	Fixed::operator++()
{
	value += 1;
	return (*this);
}

Fixed	Fixed::operator--()
{
	value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result(*this);

	value += 1;
	return (result);
}

Fixed	Fixed::operator--(int)
{
	Fixed result(*this);

	value -= 1;
	return (result);
}

void	Fixed::operator=(Fixed const & toCopy)
{
	value = toCopy.getRawBits();
}

Fixed &Fixed::min( Fixed &a, Fixed &b)
{
    return ((a < b) ? a : b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b)
{
    return ((a > b) ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

int		Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int		Fixed::toInt(void) const
{
	return (value >> nbBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << nbBits));
}

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	value = toCopy.getRawBits();
}

Fixed::Fixed(int const p_value)
{
	value = p_value << nbBits;
}

Fixed::Fixed(float const p_value)
{
	value = roundf(p_value * (1 << nbBits));
}

Fixed::~Fixed()
{
	return ;
}
