/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:04:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, Fixed const & to_draw)
{
	os << to_draw.toFloat();
	return os;
}

void	Fixed::operator=(Fixed const & toCopy)
{
	//std::cout<< "operator =\n";
	value = toCopy.getRawBits();
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
	//std::cout << "toInt\n";
	return (value >> nbBits);
}

float	Fixed::toFloat(void) const
{
	//std::cout << "toFloat\n";
	return ((float)value / (float)(1 << nbBits));
}

Fixed::Fixed()
{
	//std::cout << "default construtor\n";
	value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	//std::cout << "copy constructor\n";
	*this = toCopy;
}

Fixed::Fixed(int const p_value)
{
	//std::cout << "int fixed value constructor\n";
	value = p_value << nbBits;
}

Fixed::Fixed(float const p_value)
{
	//std::cout << "float fixed value constructor\n";
	value = roundf(p_value * (1 << nbBits));
}

Fixed::~Fixed()
{
	//std::cout << "destructor\n";
}
