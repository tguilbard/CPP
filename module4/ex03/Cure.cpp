/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:39:04 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:55:23 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const &toCopy) : AMateria(toCopy)
{

}

Cure &Cure::operator=(Cure const &toCopy)
{
	if (this != &toCopy)
	{
		*this = toCopy;
	}
	return (*this);
}

Cure::~Cure()
{

}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "\'s wounds *\n";
}
