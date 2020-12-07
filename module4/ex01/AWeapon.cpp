/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:12:43 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 11:22:45 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	_name = "Weapon";
	_dmg = 0;
	_ap = 0;
}

AWeapon::AWeapon(AWeapon const & toCopy)
{
	_name = toCopy.getName();
	_dmg = toCopy.getDamage();
	_ap = toCopy.getAPCost();
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_dmg = damage;
	_ap = apcost;
}

AWeapon::~AWeapon()
{

}

AWeapon &AWeapon::operator=(AWeapon const &toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy.getName();
		_dmg = toCopy.getDamage();
		_ap = toCopy.getAPCost();
	}
	return (*this);
}

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
		return (_ap);
}

int AWeapon::getDamage() const
{
	return (_dmg);
}
