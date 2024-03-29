/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 11:47:16 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 11:51:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::beRepaired(unsigned int amount)
{
	if (max_hit_points - hit_points >= amount)
		hit_points += amount;
	else
		hit_points = 100;
	std::cout << name << ": Sweet life juice!" << std::endl;
		std::cout << name << " actual hit point: " << hit_points << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " ranged attack " << target << " cause " << ranged_attack_damage << " damage" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " melee attack " << target << " cause " << melee_attack_damage << " damage" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
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
			std::cout << name << " copy miley cyrus and becomes a wrecking ball, " << target << " receive 40 domage" << std::endl;
		else if (num == 1)
			std::cout << name << " lunching the AIM protocol, " << target << " receives 45 damage" << std::endl;
		else if (num == 2)
			std::cout << name << " using the discolaser, " << target << " receives 40 damage" << std::endl;
		else if (num == 3)
			std::cout << name << " BM " << target << " inflict 5 mental damage" << std::endl;
		else if (num == 4)
			std::cout << name << " using grenade, " << target << " receive 35 damage" << std::endl;
	}
}

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string name) :
hit_points(100), max_hit_points(100), energy_points(100),
name(name), melee_attack_damage(30),
ranged_attack_damage(20), armor_rating(5)
{
	max_energy_points = 100;
	level = 1;
	srand(time(NULL));
	std::cout << name << ": Recompiling my combat code" << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy)
{
	*this = toCopy;
}

FragTrap &	FragTrap::operator=(FragTrap const & toCopy)
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

FragTrap::~FragTrap()
{
 std::cout << name << ": I'll get you next time!" << std::endl;
}
