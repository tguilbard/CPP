/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 11:34:05 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 13:18:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private :
	NinjaTrap();

	public :

	NinjaTrap(std::string name);
	~NinjaTrap();

	NinjaTrap(NinjaTrap const & toCopy);
	NinjaTrap & operator=(NinjaTrap const & toCopy);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void ninjaShoeBox(ClapTrap & target);
	void ninjaShoeBox(FragTrap & target);
	void ninjaShoeBox(ScavTrap & target);
	void ninjaShoeBox(NinjaTrap & target);

};

#endif
