/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:38:31 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 11:40:48 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const & toCopy) : AWeapon(toCopy)
{

}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *\n";
}
