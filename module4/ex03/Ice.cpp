/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:39:04 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:55:44 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(Ice const &toCopy) : AMateria(toCopy)
{

}

Ice &Ice::operator=(Ice const &toCopy)
{
	if (this != &toCopy)
	{
		*this = toCopy;
	}
	return (*this);
}

Ice::~Ice()
{

}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
