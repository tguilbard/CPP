/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:51:20 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 12:43:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ClapTrap
{
	public :

	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(ClapTrap const & toCopy);
	ClapTrap & operator=(ClapTrap const & toCopy);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected :
	ClapTrap(std::string name, int hp, int mhp, int ep, int mep, int mad, int rad, int ar);
	void	copy(ClapTrap const & toCopy);

	unsigned int	hit_points;
	unsigned int	max_hit_points;
	unsigned int	energy_points;
	unsigned int	max_energy_points;
	unsigned int	level;
	std::string		name;
	unsigned int	melee_attack_damage;
	unsigned int	ranged_attack_damage;
	unsigned int	armor_rating;

	private :
	ClapTrap();
};

#endif
