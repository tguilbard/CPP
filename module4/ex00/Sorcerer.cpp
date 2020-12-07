/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 10:37:03 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/08 11:35:26 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "iostream"

ostream& operator<<(ostream& os, Sorcerer const & toDraw)
{
	os << "I am " << toDraw.getName() << ", " << toDraw.getTitle() << ", and i like ponies!\n";
	return os;
}

Sorcerer::Sorcerer()
{
	name = "robert";
	title = "wizard by trade";
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(string p_name, string p_title)
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
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same\n";
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

string Sorcerer::getName(void) const
{
	return (name);
}

string Sorcerer::getTitle(void) const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &toPoly) const
{
	toPoly.getPolymorphed();
}
