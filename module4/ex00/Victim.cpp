/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:09:47 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:33:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "iostream"

std::ostream& operator<<(std::ostream& os, Victim const & toDraw)
{
	os << "I'm " << toDraw.getName() << " and I like otters!\n";

	return os;
}

Victim::Victim()
{
	name = "passerby";
	std::cout << "A random victim called " << name << " just appeared!\n";
}

Victim::Victim(std::string p_name)
{
	name = p_name;
	std::cout << "A random victim called " << name << " just appeared!\n";
}
Victim::Victim(Victim const & toCopy)
{
	name = toCopy.getName();
}

Victim::~Victim()
{
	std::cout << "The victim " << name << " died for no apparent reasons!\n";
}

Victim &Victim::operator=(Victim const & toCopy)
{
	if (this != &toCopy)
		name = toCopy.getName();
	return (*this);
}

std::string Victim::getName(void) const
{
	return  (name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " was just polymorphed in a cute little sheep!\n";
}
