/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 11:47:16 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:24:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_rating = 5;
	std::cout << name << ": Recompiling my combat code" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << name << ": I'll get you next time!" << std::endl;
}
