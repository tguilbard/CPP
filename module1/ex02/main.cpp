/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:43:58 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 13:19:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	Zombie test1("roger", "runner");

	test1.advert();
	
	ZombieEvent test2;
	Zombie *addr;

	test2.setZombieType("Vodou");
	addr = test2.randomChump();

	delete addr;
}
