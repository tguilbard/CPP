/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:26:10 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 13:11:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public :
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump(void);

	private :
	std::string _type;
};

#endif
