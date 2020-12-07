/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:27:58 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:44:33 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria()
{
	_xp = 0;
	_type = "none";
}

AMateria::AMateria(AMateria const &toCopy)
{
	_xp = toCopy.getXP();
	_type = toCopy.getType();
}

AMateria &AMateria::operator=(AMateria const &toCopy)
{
	if (this != &toCopy)
	{
		_xp = toCopy.getXP();
		_type = toCopy.getType();
	}
	return(*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return(_type);
}

unsigned int AMateria::getXP() const
{
	return(_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
