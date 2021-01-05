/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:28:50 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 16:12:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	_type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *Zombie;

	Zombie = newZombie(Zombie->randomName(10));
	Zombie->advert();

	return (Zombie);
}
