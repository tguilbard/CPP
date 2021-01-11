/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:15:51 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 11:50:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (max_hit_points - hit_points >= amount)
		hit_points += amount;
	else
		hit_points = 100;
	std::cout << name << ": Sweet life juice!" << std::endl;
	std::cout << name << " actual hit point: " << hit_points << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " ranged attack " << target << " cause " << ranged_attack_damage << " damage" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " melee attack " << target << " cause " << melee_attack_damage << " damage" << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	int num;

	if (energy_points < 25)
	{
		std::cout << name << " not enough energy" << std::endl;
	}
	else
	{
		energy_points -= 25;
		num = rand() % 5;
		if (num == 0)
			std::cout << name << ": Ah! Ah! he is the time of your death" << std::endl;
		else if (num == 1)
			std::cout << name << ": I will prove to you my robotic superiority!" << std::endl;
		else if (num == 2)
			std::cout << name << ": Dance battle! Or, you know... regular battle." << std::endl;
		else if (num == 3)
			std::cout << name << ": You wanna fight with me?! Put 'em up!.. Put 'em up?" << std::endl;
		else if (num == 4)
			std::cout << name << ": You versus me! Me versus you! Either way!" << std::endl;
	}
}

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) :
hit_points(100), max_hit_points(100), energy_points(50),
name(name), melee_attack_damage(20),
ranged_attack_damage(15), armor_rating(3)
{
	max_energy_points = 50;
	level = 1;
	srand(time(NULL));
	std::cout << name << ": This time it'll be awesome, I promise!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy)
{
	*this = toCopy;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & toCopy)
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

ScavTrap::~ScavTrap()
{
 std::cout << name << ": No fair! I wasn't ready." << std::endl;
}
