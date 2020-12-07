/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 10:28:55 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/08 11:33:42 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include "iostream"
using namespace std;

class Sorcerer
{
	public :
	Sorcerer();
	Sorcerer(string p_name, string p_title);
	Sorcerer(Sorcerer const & toCopy);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const & toCopy);
	string getName(void) const;
	string getTitle(void) const;
	void polymorph(Victim const &toPoly) const;

	private:
	string name;
	string title;
};

ostream& operator<<(ostream& os, Sorcerer const & toDraw);

#endif
