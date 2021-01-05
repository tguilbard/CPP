/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:22:00 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 10:51:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void	Fixed::operator=(Fixed const & toCopy)
{
	std::cout<< "operator =\n";
	if (this != &toCopy)
		value = toCopy.getRawBits();
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
	*this = toCopy;
}

Fixed::~Fixed()
{
	std::cout << "destructor\n";
}
