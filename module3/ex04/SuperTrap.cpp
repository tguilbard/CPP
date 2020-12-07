/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:27:49 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/26 13:35:27 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>


void	SuperTrap::meleeAttack(std::string const & target)
{
		NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
		FragTrap::rangedAttack(target);
}

SuperTrap::SuperTrap(std::string name) :
ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	hit_points = 100;
	max_hit_points = 100;
	ranged_attack_damage = 20;
	armor_rating = 5;
	std::cout << name << ": SuperTrap he's here!" << std::endl;
	std::cout << "hit points " << hit_points << std::endl;
	std::cout << "max hit points " << max_hit_points<< std::endl;
	std::cout << "energy points " << energy_points<< std::endl;
	std::cout << "max energy points " << max_energy_points << std::endl;
	std::cout << "level " << level << std::endl;
	std::cout << "name " << name << std::endl;
	std::cout << "melee attack damage " << melee_attack_damage << std::endl;
	std::cout << "ranged attack damage " << ranged_attack_damage << std::endl;
	std::cout << "armor rating " << armor_rating<< std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << name << ": NO! I am not indestructible!" << std::endl;
}
