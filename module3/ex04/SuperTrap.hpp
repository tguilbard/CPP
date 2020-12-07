/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:25:31 by tguilbar          #+#    #+#             */
/*   Updated: 2020/05/26 13:27:54 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public :

	SuperTrap(std::string name);
	~SuperTrap();
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);

};

#endif
