/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:38:46 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 11:36:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Value.hpp"

int main(int ac, char const **av)
{
	if (ac != 2)
	{
		std::cout << "convert: error: bad arguments\n"
				<< "         usage: value" << std::endl;
	}
	else
	{
		Value	value(av[1]);
		std::cout << value << std::endl;
	}
	return (0);
}
