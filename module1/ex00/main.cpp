/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:56:41 by user42            #+#    #+#             */
/*   Updated: 2020/12/29 09:41:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony obj;
	
	obj.describe();
	std::cout << "pony on the stack deleted\n";
}

void ponyOnTheHeap()
{
	Pony *obj;

	obj = new Pony;
	obj->describe();
	delete obj;
	std::cout << "pony on the heap deleted\n";
}

int main()
{
	std::cout << "pony on the stack\n";
	ponyOnTheStack();
 
	std::cout << "pony on the heap\n";
	ponyOnTheHeap();
}
