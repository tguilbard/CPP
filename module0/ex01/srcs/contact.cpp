/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:48:38 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 15:07:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
	_first_name = "";
    _last_name = "";
    _nickname = "";
    _login = "";
    _postal_address = "";
    _email_address = "";
    _phone_number = "";
    _birthday_date = "";
    _favorite_meal = "";
    _underwear_color = "";
    _darkest_secret = "";
}

contact::~contact()
{
	return ;
}

void contact::set_contact()
{
	std::cout << "first name: ";
	std::cin >> _first_name;
	std::cout << "last name: ";
	std::cin >> _last_name;
	std::cout << "nickname: ";
	std::cin >> _nickname;
	std::cout << "login: ";
	std::cin >> _login;
	std::cout << "postal address: ";
	std::cin >> _postal_address;
	std::cout << "email address: ";
	std::cin >> _email_address;
	std::cout << "phone number: ";
	std::cin >> _phone_number;
	std::cout << "birthday date: ";
	std::cin >> _birthday_date;
	std::cout << "favorite meal: ";
	std::cin >> _favorite_meal;
	std::cout << "underwear color: ";
	std::cin >> _underwear_color;
	std::cout << "darkest_secret: ";
	std::cin >> _darkest_secret;
}

std::string contact::format_first_name() const
{
	std::string tmp;
	int size;

	tmp = _first_name;
	size = tmp.size();
	if (size < 10)
	{
		tmp.clear();
		while (size < 10)
		{
			tmp += ' ';
			size++;
		}
		tmp += _first_name;
	}
	else if (size > 10)
	{
		tmp.resize(9);
		tmp.push_back('.');
	}
	return (tmp);
}

std::string contact::format_last_name() const
{
	std::string tmp;
	int size;

	tmp = _last_name;
	size = tmp.size();
	if (size < 10)
	{
		tmp.clear();
		while (size < 10)
		{
			tmp += ' ';
			size++;
		}
		tmp += _last_name;
	}
	else if (size > 10)
	{
		tmp.resize(9);
		tmp.push_back('.');
	}
	return (tmp);
}

std::string contact::format_nickname() const
{
	std::string tmp;
	int size;

	tmp = _nickname;
	size = tmp.size();
	if (size < 10)
	{
		tmp.clear();
		while (size < 10)
		{
			tmp += ' ';
			size++;
		}
		tmp += _nickname;
	}
	else if (size > 10)
	{
		tmp.resize(9);
		tmp.push_back('.');
	}
	return (tmp);
}

std::string contact::get_first_name() const
{
	return (_first_name);
}

std::string contact::get_last_name() const
{
	return (_last_name);
}

std::string contact::get_nickname() const
{
	return (_nickname);
}

std::string contact::get_login() const
{
	return (_login);
}

std::string contact::get_postal_address() const
{
	return (_postal_address);
}

std::string contact::get_email_address() const
{
	return (_email_address);
}

std::string contact::get_phone_number() const
{
	return (_phone_number);
}

std::string contact::get_birthday_date() const
{
	return (_birthday_date);
}

std::string contact::get_favorite_meal() const
{
	return (_favorite_meal);
}

std::string contact::get_underwear_color() const
{
	return (_underwear_color);
}

std::string contact::get_darkest_secret() const
{
	return (_darkest_secret);
}

std::ostream& operator<<(std::ostream& os, contact const & to_draw)
{
	os << "first name: " << to_draw.get_first_name()
		<< "\nlast name: " << to_draw.get_last_name()
		<< "\nnickname: " << to_draw.get_nickname()
		<< "\nlogin: " << to_draw.get_login()
		<< "\npostal address: " << to_draw.get_postal_address()
		<< "\nemail address: " << to_draw.get_email_address()
		<< "\nphone number: " << to_draw.get_phone_number()
		<< "\nbirthday date: " << to_draw.get_birthday_date()
		<< "\nfavorite meal: " << to_draw.get_favorite_meal()
		<< "\nunderwear color: " << to_draw.get_underwear_color()
		<< "\ndarkest secret: " << to_draw.get_darkest_secret() << std::endl;
	return (os);
}
