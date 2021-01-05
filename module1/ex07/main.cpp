/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:33:23 by user42            #+#    #+#             */
/*   Updated: 2020/12/30 15:38:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>


std::string*	getFile(std::string name)
{
	std::string *file = new std::string;
	std::string tmp;
	std::ifstream input(name.c_str());

	if (input)
	{
		while (getline(input, tmp))
		{
			*file += tmp;
			*file += "\n";
		}
		return (file);
	}
	else
		std::cout << "error opening file\n";
	return (0);
}

void	replace(std::string* file, std::string str1, std::string str2)
{
	size_t i;

	if (str1.compare(str2) == 0)
		return ;
	while ((i = file->find(str1)) != std::string::npos)
		file->replace(i, str1.length(), str2);
}

void	output(std::string name, std::string *file)
{
	name += ".replace";
	std::ofstream output(name.c_str());
	
	if (output.is_open())
		output << *file;
	else
		std::cout << "error creating file\n";
	return ;
}

int main(int ac, char **av)
{
	std::string* file;
	if (ac == 4)
	{
		file = getFile(av[1]);
		if (file == 0)
			return (0);
		replace(file, av[2], av[3]);
		output(av[1], file);
		delete file;
	}
	else
		std::cout << "wrong input\n";
	return (0);
}
