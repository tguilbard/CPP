/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:40:57 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 11:07:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string getType() const;
	void	setType(std::string type);

	private :
	std::string _type;
};

#endif
