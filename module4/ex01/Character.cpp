/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 12:21:17 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 13:12:39 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::ostream& operator<<(std::ostream& os, Character const &toDraw)
{
	if (toDraw.getWeapon() != NULL)
	{
				os << toDraw.getName() << " has " << toDraw.getAP() << " AP and carries a " << toDraw.getWeapon()->getName() << "\n";
	}
	else
	{
		os << toDraw.getName() << " has " << toDraw.getAP() << " AP and is unarmed\n";
	}
	return os;
}

Character::Character()
{
	_name = "random";
	_ap = 40;
	_wpn = NULL;
}

Character::Character(Character const &toCopy)
{
	_name = toCopy.getName();
	_ap = toCopy.getAP();
	delete _wpn;
	_wpn = toCopy.getWeapon();
}

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_wpn = NULL;
}

Character::~Character()
{

}

Character &Character::operator=(Character const &toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy.getName();
		_ap = toCopy.getAP();
		delete _wpn;
		_wpn = toCopy.getWeapon();
	}
	return (*this);
}

void Character::recoverAP()
{
	_ap += 10;
	_ap = (_ap > 40) ? 40 : _ap;
}

void Character::equip(AWeapon *wpn)
{
	_wpn = wpn;
}

void Character::attack(Enemy *mob)
{
	if (_wpn != NULL)
	{
		if (_wpn->getAPCost() <= _ap)
		{
			std::cout << _name << " attack " << mob->getType() << " with a " << _wpn->getName() << "\n";
			_wpn->attack();
			mob->takeDamage(_wpn->getDamage());
			_ap -= _wpn->getAPCost();
			if (mob->getHP() <= 0)
				delete mob;
		}
	}
}

std::string Character::getName() const
{
	return (_name);
}

int Character::getAP() const
{
	return (_ap);
}

AWeapon	*Character::getWeapon() const
{
	return (_wpn);
}
