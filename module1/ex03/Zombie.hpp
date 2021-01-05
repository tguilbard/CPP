/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:01:42 by user42            #+#    #+#             */
/*   Updated: 2020/12/29 17:17:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

class Zombie
{
	public :
	Zombie();
	~Zombie();
	Zombie(std::string name, std::string type);
	void advert();
	static std::string randomName(int sizei);

	private :
	std::string _type;
	std::string _name;
};

#endif
