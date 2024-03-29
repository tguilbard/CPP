/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 11:47:16 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 12:56:45 by user42           ###   ########.fr       */
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

FragTrap::FragTrap(std::string name) :
ClapTrap(name, 100, 100, 100, 100, 30, 20, 5)
{
	std::cout << name << ": Recompiling my combat code" << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy) :
ClapTrap(toCopy.name)
{
	std::cout << name << ": Recompiling my combat code" << std::endl;
	*this = toCopy;	
}

FragTrap & FragTrap::operator=(FragTrap const & toCopy)
{
	ClapTrap::copy(toCopy);

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << name << ": I'll get you next time!" << std::endl;
}
