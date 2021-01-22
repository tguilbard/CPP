/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:20:17 by user42            #+#    #+#             */
/*   Updated: 2021/01/21 12:37:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << std::endl;
		void	*raw = serialize();
		Data	*dt = deserialize(raw);

		std::cout << dt->s1 << std::endl;
		std::cout << dt->n << std::endl;
		std::cout << dt->s2 << std::endl;

		delete static_cast<char *>(raw);
		delete dt;
	}

	return (0);
}
