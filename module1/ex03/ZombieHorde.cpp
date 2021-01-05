/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:13:18 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 16:37:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_size = n;
	_Zombies = new Zombie[n];

	while (n--)
		_Zombies[n] = Zombie(Zombie::randomName(10), "Menber of the Horde");
	std::cout << "the horde appeared\n";
}

ZombieHorde::~ZombieHorde()
{
	delete[] _Zombies;
	std::cout << "the horde was destroy\n";
}

void	ZombieHorde::announce()
{
	int i;

	i = 0;
	while (i < _size)
		_Zombies[i++].advert();
}
