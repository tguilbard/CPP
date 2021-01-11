/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:35:59 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 12:57:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP" << name << " ranged attack " << target << " cause " << ranged_attack_damage << " damage" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << name << " melee attack " << target << " cause " << melee_attack_damage << " damage" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap & target)
{
	if (energy_points >= 25)
	{
		std::cout << name << " assassinate target." << std::endl;
		target.takeDamage(melee_attack_damage * 2);
		energy_points -= 25;
	}
	else
		std::cout << name << " not enough energy" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap & target)
{
	(void)target;

	if (energy_points >= 25)
	{
		std::cout << name << " use internet popup to deactivate the sighting system." << std::endl;
		energy_points -= 25;
	}
	else
		std::cout << name << " not enough energy" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap & target)
{
	(void)target;
	
	if (energy_points >= 25)
	{
		std::cout << name << ": you can't hurt me" << std::endl;
		beRepaired(20);
		energy_points -= 25;
	}
	else
		std::cout << name << " not enough energy" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap & target)
{
	if (energy_points >= 25)
	{
		std::cout << name << " use a draining bullet" << std::endl;
		target.takeDamage(ranged_attack_damage);
		beRepaired(ranged_attack_damage);
		energy_points -= 25;
	}
	else
		std::cout << name << " not enough energy" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
ClapTrap(name, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << name << ": Starting ninja device" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & toCopy) :
ClapTrap(toCopy.name)
{
	std::cout << name << ": Starting ninja device" << std::endl;
	*this = toCopy;	
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & toCopy)
{
	ClapTrap::copy(toCopy);

	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << ": What's happening to me?" << std::endl;
}
