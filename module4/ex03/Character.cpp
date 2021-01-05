/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:02:41 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/05 09:46:48 by user42           ###   ########.fr       */
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
	_nb = 0;
}

Character::Character(std::string const &name)
{
	_name = name;
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
	_nb = 0;
}

Character::Character(Character const &toCopy)
{
	_name = toCopy.getName();
	for (int i = 0; i < 4; i++)
		if (toCopy._inv[i] != NULL)
			_inv[i] = toCopy._inv[i]->clone();
		else
			_inv[i] = NULL;
	_nb = toCopy._nb;
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
		for (int i = 0; i < 4; i++)
			if (toCopy._inv[i] != NULL)
				_inv[i] = toCopy._inv[i]->clone();
			else
				_inv[i] = NULL;
		_nb = toCopy._nb;
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
	if (_nb == 4 || m == NULL)
		return ;
	for (int i = 0; i < _nb; i++) 
		if (_inv[i] == m)
			return ;
	_inv[_nb++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > _nb)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->_inv[i] = this->_inv[i + 1];
        this->_inv[i + 1] = NULL;
	}
	_nb--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
		if (_inv[idx] != NULL)
			_inv[idx]->use(target);
}
