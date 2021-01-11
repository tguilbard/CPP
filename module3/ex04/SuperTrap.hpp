/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:25:31 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/11 13:01:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private :
	SuperTrap();

	public :

	SuperTrap(std::string name);
	~SuperTrap();
		
	SuperTrap(SuperTrap const & toCopy);
	SuperTrap & operator=(SuperTrap const & toCopy);

	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);

};

#endif
