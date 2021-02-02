/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:34:01 by user42            #+#    #+#             */
/*   Updated: 2021/02/02 11:58:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void	display(T &value)
{
	std::cout << value;
}

void	upper(char &value)
{
	value = toupper(static_cast<int>(value));
}

int main()
{
	std::string str = "test";

	iter(str.c_str(), str.length(), &display);
	std::cout << std::endl;

	iter(const_cast<char *>(str.c_str()), str.length(), &upper);
	std::cout << str << std::endl;

	int tabI[5] = {1, 2, 3, 4, 5};

	iter(tabI, 5, &display);
	std::cout << std::endl;

	float tabF[3] = {-1.43f, 2.14f, 3.14f};
	iter(tabF, 3, &display);
	std::cout << std::endl;

	bool state = true;
	iter(&state, 1, &display);
	std::cout << std::endl;
	
	return 0;
}
