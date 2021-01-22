/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:08:09 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/19 10:24:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "iostream"
using namespace std;

class Victim
{
	public :
	Victim();
	Victim(string p_name);
	Victim(Victim const & toCopy);
	virtual ~Victim();
	Victim &operator=(Victim const & toCopy);
	string getName(void) const;
	virtual void getPolymorphed(void) const;

	private:
	string name;

};

ostream& operator<<(ostream& os, Victim const & toDraw);

#endif
