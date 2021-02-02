/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 10:28:55 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:31:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include "iostream"

class Sorcerer
{
	public :
	Sorcerer(std::string p_name, std::string p_title);
	Sorcerer(Sorcerer const & toCopy);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const & toCopy);
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &toPoly) const;

	private:
	Sorcerer();
	std::string name;
	std::string title;
};

std::ostream& operator<<(std::ostream& os, Sorcerer const & toDraw);

#endif
