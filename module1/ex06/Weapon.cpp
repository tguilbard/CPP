/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:43:48 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 11:08:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "";
}
Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
