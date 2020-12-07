/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:52:15 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 11:57:06 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	_hp = 0;
	_type = "none";
}

Enemy::Enemy(Enemy const &toCopy)
{
	_hp = toCopy.getHP();
	_type = toCopy.getType();
}

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::~Enemy()
{

}

Enemy &Enemy::operator=(Enemy const &toCopy)
{
	if (this != &toCopy)
	{
		_hp = toCopy.getHP();
		_type = toCopy.getType();
	}
	return (*this);
}

std::string Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		_hp -= dmg;
}
