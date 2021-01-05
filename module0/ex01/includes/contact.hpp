/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:32:02 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 15:03:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "include.hpp"

class contact
{
	public :
	contact();
	~contact();
	void	set_contact();
	std::string	format_first_name() const;
	std::string	format_last_name() const;
	std::string	format_nickname() const;
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_login() const;
	std::string get_postal_address() const;
	std::string get_email_address() const;
	std::string get_phone_number() const;
	std::string get_birthday_date() const;
	std::string get_favorite_meal() const;
	std::string get_underwear_color() const;
	std::string get_darkest_secret() const;

	private :
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
};

std::ostream& operator<<(std::ostream& os, contact const & to_draw);

#endif
