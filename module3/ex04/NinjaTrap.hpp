/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:34:05 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 12:52:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public :

	NinjaTrap(std::string name);
	~NinjaTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void ninjaShoeBox(ClapTrap & target);
	void ninjaShoeBox(FragTrap & target);
	void ninjaShoeBox(ScavTrap & target);
	void ninjaShoeBox(NinjaTrap & target);

};

#endif
