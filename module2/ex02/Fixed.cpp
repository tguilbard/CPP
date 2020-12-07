/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/05 12:03:40 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

ostream& operator<<(ostream& os, Fixed const & to_draw)
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

Fixed	Fixed::operator=(Fixed const & toCopy)
{
	if (this != &toCopy)
		value = toCopy.getRawBits();
	return (*this);
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
	int result;
	bool negative;

	negative = (value < 0) ? true : false;
	result = (negative) ? (-1 * value) >> 8 : value >> 8;
	result *= (negative) ? -1 : 1;
	return (result);
}

float	Fixed::toFloat(void) const
{
	float result;
	float bitValue;
	bool negative;
	int fractional;
	int i;

	negative = (value < 0) ? true : false;
	result = (negative) ? (-1 * value) >> 8 : value >> 8;
	fractional = (negative) ? ((-1 * value) << 24) >> 24 : (value << 24) >> 24;
	i = 1;
	bitValue = 0.5;
	while (i <= 8)
	{
		if (fractional & (1u << (8 - i)))
			result += bitValue;
		bitValue /= 2;
		i++;
	}
	result *= (negative) ? -1 : 1;
	return (result);
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
	if (p_value < 0)
	{
		value = (p_value * -1) << 8;
		value *= -1;
	}
	else
		value = p_value << 8;
}

Fixed::Fixed(float const p_value)
{
	float fractional;
	float bitValue;
	int integer;
	bool negative;
	int i;

	negative = (p_value < 0) ? true : false;
	integer = (negative) ? -1 * (int)p_value : (int)p_value;
	value = integer << 8;
	fractional = (negative) ? (-1 * p_value) - integer : p_value - integer;
	i = 1;
	bitValue = 0.5;
	while (i <= 8 && fractional > 0)
	{
		if (bitValue <= fractional)
		{
			value += 1 << (8 - i);
			fractional -= bitValue;
		}
		bitValue /= 2;
		i++;
	}
	value *= (negative) ? -1 : 1;
}

Fixed::~Fixed()
{
	return ;
}
