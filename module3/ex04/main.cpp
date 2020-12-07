/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 12:29:19 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/26 13:37:17 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap ent("hero");
	ScavTrap test("test");

	ent.rangedAttack("testobot");
	ent.meleeAttack("testobot");
	ent.vaulthunter_dot_exe("testobot");
	ent.ninjaShoeBox(test);
}
