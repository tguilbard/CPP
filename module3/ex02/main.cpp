/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 12:29:19 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/25 15:44:50 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap ent1("exterminatronc");
	ScavTrap ent2("trunkminator");

	ent2.challengeNewcomer();
	ent2.challengeNewcomer();
	ent2.challengeNewcomer();
	ent1.rangedAttack("brobot");
	ent2.rangedAttack("trainingbot");
	ent1.meleeAttack("brobot");
	ent2.meleeAttack("trainingbot");
	ent1.beRepaired(20);
	ent2.beRepaired(50);
	ent1.takeDamage(100);
	ent1.takeDamage(20);
	ent2.takeDamage(30);
	ent2.takeDamage(100);
	ent1.vaulthunter_dot_exe("brobot");
	ent1.vaulthunter_dot_exe("brobot");
	ent1.vaulthunter_dot_exe("brobot");
	ent1.vaulthunter_dot_exe("brobot");
	ent1.vaulthunter_dot_exe("brobot");

}
