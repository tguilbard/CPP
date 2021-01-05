/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:06:31 by user42            #+#    #+#             */
/*   Updated: 2020/12/29 17:18:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_type = "";
	_name = "";
}

Zombie::Zombie(std::string name, std::string type)
{
	_type = type;
	_name = name;
}

Zombie::~Zombie()
{
}

void	Zombie::advert()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ...\n";
}

std::string	Zombie::randomName(int size)
{
    static std::string chrs =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";

	srand(time(NULL));
    std::string s;

    while(size--)
        s += chrs[rand() % chrs.length()];
    return (s);
}
