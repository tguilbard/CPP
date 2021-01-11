/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:51:19 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 12:43:59 by user42           ###   ########.fr       */
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

void	ClapTrap::copy(ClapTrap const & toCopy)
{
	*this = toCopy;
}

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : level(1), name(name)
{
	srand(time(NULL));
	std::cout << name << ": start bootup sequence." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	*this = toCopy;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & toCopy)
{
	hit_points = toCopy.hit_points;
	max_hit_points = toCopy.max_hit_points;
	energy_points = toCopy.energy_points;
	max_energy_points = toCopy.max_energy_points;
	level = toCopy.level;
	name = toCopy.name;
	melee_attack_damage = toCopy.melee_attack_damage;
	ranged_attack_damage = toCopy.ranged_attack_damage;
	armor_rating = toCopy.armor_rating;

	return (*this);
}

ClapTrap::ClapTrap(std::string name, int hp, int mhp, int ep, int mep, int mad, int rad, int ar) :
hit_points(hp), max_hit_points(mhp), energy_points(ep), max_energy_points(mep),level(1),
name(name), melee_attack_damage(mad), ranged_attack_damage(rad), armor_rating(ar)
{
	srand(time(NULL));
	std::cout << name << ": start bootup sequence." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ": NO! NO! NO! I lose" << std::endl;
}
