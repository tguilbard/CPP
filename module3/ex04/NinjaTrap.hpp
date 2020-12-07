/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:34:05 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/26 12:46:11 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

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
