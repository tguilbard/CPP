/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/01 16:11:46 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed	Fixed::operator=(Fixed const & toCopy)
{
	std::cout<< "operator =\n";
	if (this != &toCopy)
		value = toCopy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "use getRawBits\n";
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "use setRawBits\n";
	value = raw;
}

Fixed::Fixed()
{
	std::cout << "default construtor\n";
	value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	std::cout << "copy constructor\n";
	value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "destructor\n";
}
