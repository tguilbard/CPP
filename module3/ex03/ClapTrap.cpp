/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:51:19 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:23:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (max_hit_points - hit_points >= amount)
		hit_points += amount;
	else
		hit_points = 100;
	std::cout << name << ": Sweet life juice!" << std::endl;
		std::cout << name << " actual hit point: " << hit_points << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = (amount >= armor_rating) ? amount - armor_rating : 0;
	if (hit_points >= amount)
		hit_points -= amount;
	else
	{
		amount = hit_points;
		hit_points = 0;
	}
	std::cout << name << " as take " << amount << " damage" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "SL4P-TP " << name << " ranged attack " << target << " cause " << ranged_attack_damage << " damage" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "SL4P-TP " << name << " melee attack " << target << " cause " << melee_attack_damage << " damage" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : level(1), name(name)
{
	srand(time(NULL));
	std::cout << name << ": start bootup sequence." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ": NO! NO! NO! I lose" << std::endl;
}
