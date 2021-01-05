/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:07:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 09:35:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	std::stringstream stream;
	stream << std::uppercase << this;
	return (stream.str());
}
