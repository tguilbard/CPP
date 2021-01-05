/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbard@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:07:21 by tguilbar          #+#    #+#             */
/*   Updated: 2020/12/10 14:47:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int ac, char **av)
{
	int i;
	string str;

	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			str = av[i++];
			for (string::size_type j = 0; j < str.length(); ++j)
				cout << (char)toupper(str[j]);
		}
		cout << endl;
	}
}
