/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:27:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/21 11:11:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	_name = "Pony Pony";
	_color = "black";
	_speed = 27;
}

Pony::~Pony()
{
	;
}

void Pony::describe()
{
	std::cout << _name << " the " << _color << " pony\nhave an average speed of " << _speed << " Km/h\n"; 
}
