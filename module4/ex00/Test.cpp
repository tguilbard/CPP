/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:42:03 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/19 10:32:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test() : Victim()
{
	std::cout << "Test!start\n";
}

Test::Test(string p_name) : Victim(p_name)
{
	std::cout << "Test!start\n";
}

Test::Test(Test const & toCopy) : Victim(toCopy)
{

}

Test::~Test()
{
	std::cout << "Test!end\n";
}

Test &Test::operator=(Test const & toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}

void Test::getPolymorphed(void) const
{
	std::cout << "Test!" << getName() << " was just polymorphed\n";
}
