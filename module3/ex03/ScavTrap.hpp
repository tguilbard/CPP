/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:15:52 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:49:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer();

};

#endif
