/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:42:03 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:29:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(std::string p_name) : Victim(p_name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const & toCopy) : Victim(toCopy)
{

}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon &Peon::operator=(Peon const & toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << getName() << " was just polymorphed into a pink pony!\n";
}
