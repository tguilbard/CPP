/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/04 11:52:16 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

ostream& operator<<(ostream& os, Fixed const & to_draw)
{
	os << to_draw.toFloat();
	return os;
}

Fixed	Fixed::operator=(Fixed const & toCopy)
{
	//std::cout<< "operator =\n";
	if (this != &toCopy)
		value = toCopy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits\n";
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits\n";
	value = raw;
}

int		Fixed::toInt(void) const
{
	int result;
	bool negative;

	//std::cout << "toInt\n";
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

	//std::cout << "toFloat\n";
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
	//std::cout << "default construtor\n";
	value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	//std::cout << "copy constructor\n";
	value = toCopy.getRawBits();
}

Fixed::Fixed(int const p_value)
{
	//std::cout << "int fixed value constructor\n";
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

	//std::cout << "float fixed value constructor\n";
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
	//std::cout << "destructor\n";
}
