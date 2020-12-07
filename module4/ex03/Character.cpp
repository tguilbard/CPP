/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:02:41 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:45:56 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "random";
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}

Character::Character(std::string const &name)
{
	_name = name;
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}

Character::Character(Character const &toCopy)
{
	_name = toCopy.getName();
	delete _inv[0];
	delete _inv[1];
	delete _inv[2];
	delete _inv[3];
	_inv[0] = toCopy._inv[0]->clone();
	_inv[1] = toCopy._inv[1]->clone();
	_inv[2] = toCopy._inv[2]->clone();
	_inv[3] = toCopy._inv[3]->clone();
}

Character &Character::operator=(Character const &toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy.getName();
		delete _inv[0];
		delete _inv[1];
		delete _inv[2];
		delete _inv[3];
		_inv[0] = toCopy._inv[0]->clone();
		_inv[1] = toCopy._inv[1]->clone();
		_inv[2] = toCopy._inv[2]->clone();
		_inv[3] = toCopy._inv[3]->clone();
	}
	return (*this);
}

Character::~Character()
{
	delete _inv[0];
	delete _inv[1];
	delete _inv[2];
	delete _inv[3];
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (_inv[i] != NULL && i < 4)
		i++;
	if (i < 4)
	{
		_inv[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		if (_inv[idx] != NULL)
			_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
		if (_inv[idx] != NULL)
			_inv[idx]->use(target);
}
