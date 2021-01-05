/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:43:59 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 11:58:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	secure_add(contact *phonebook, int *index)
{
	if (*index < 8)
	{
		phonebook[*index].set_contact();
		(*index)++;
	}
	else
		std::cout << "User limit reash\n";
}

void	search_contact(contact *phonebook, int index)
{
	std::string	str;
	int			i;

	if (index == 0)
		std::cout << "No contact to register, start by using ADD to register one\n";
	else
	{
		i = 0;
		while (i < index)
		{
			std::cout << "         " << i + 1 << "|" 
				<< phonebook[i].format_first_name() << "|"
				<< phonebook[i].format_last_name() << "|"
				<< phonebook[i].format_nickname() << "\n";
			i++;
		}
		std::cout << "Contact index: ";
		std::cin >> str;
		i = atoi(str.c_str());
		if (i <= index && i > 0)
			std::cout << phonebook[i - 1];
		else
			std::cout << "Wrong input\n";
	}
}

int		main()
{
	contact		*phonebook;
	std::string	input;
 	int			index;

	phonebook = new contact[8];
	index = 0;
	input = "";
	while (input.compare("EXIT") != 0)
	{
		std::cout << "What do you want ? SEARCH/ADD/EXIT\nInput: ";	
		std::cin >> input; 
		if (input.compare("ADD") == 0)
			secure_add(phonebook, &index);
		else if (input.compare("SEARCH") == 0)
			search_contact(phonebook, index);
		else if (input.compare("EXIT") != 0)
			std::cout << "Wrong input retry\n";
	}
	delete [] phonebook;
	return (0);
}
