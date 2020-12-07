/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 12:02:33 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 12:05:20 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::SuperMutant(SuperMutant const &toCopy) : Enemy(toCopy)
{

}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

void SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
