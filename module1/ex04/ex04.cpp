/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:39:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 16:43:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* addr = &str;
	std::string& ref = str;

	std::cout << *addr << std::endl;
	std::cout << ref << std::endl;
}
