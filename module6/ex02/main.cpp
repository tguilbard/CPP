/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:32:47 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 10:52:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

void	identify_from_reference(Base & p)
{
	Base *tmp = &p;

	if (dynamic_cast<A*>(tmp))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(tmp))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(tmp))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

int main()
{
	A a;
	B b;
	C c;

	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);

	identify_from_reference(a);
	identify_from_reference(b);
	identify_from_reference(c);

	return (0);
}
