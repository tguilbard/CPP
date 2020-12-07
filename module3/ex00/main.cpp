/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 12:29:19 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/25 15:43:39 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ent("exterminatronc");
	
	ent.rangedAttack("brobot");
	ent.meleeAttack("brobot");
	ent.beRepaired(20);
	ent.takeDamage(100);
	ent.takeDamage(20);
	ent.vaulthunter_dot_exe("brobot");
	ent.vaulthunter_dot_exe("brobot");
	ent.vaulthunter_dot_exe("brobot");
	ent.vaulthunter_dot_exe("brobot");
	ent.vaulthunter_dot_exe("brobot");
}
