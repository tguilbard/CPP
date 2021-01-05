/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:53:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 11:20:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}
