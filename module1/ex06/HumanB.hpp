/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:49:21 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 11:22:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon);

	private :
	Weapon*		_weapon;
	std::string	_name;
};

#endif
