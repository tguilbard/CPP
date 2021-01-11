/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:08:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 13:12:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
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
