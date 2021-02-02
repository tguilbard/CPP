/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 10:37:03 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:33:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "iostream"

std::ostream& operator<<(std::ostream& os, Sorcerer const & toDraw)
{
	os << "I am " << toDraw.getName() << ", " << toDraw.getTitle() << ", and I like ponies!\n";
	return os;
}

Sorcerer::Sorcerer(std::string p_name, std::string p_title)
{
	name = p_name;
	title = p_title;
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const & toCopy)
{
	name = toCopy.getName();
	title = toCopy.getTitle();
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer &Sorcerer::operator=(Sorcerer const & toCopy)
{
	if (this != &toCopy)
	{
		name = toCopy.getName();
		title = toCopy.getTitle();
	}
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (name);
}

std::string Sorcerer::getTitle(void) const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &toPoly) const
{
	toPoly.getPolymorphed();
}
