/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:08:09 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:32:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "iostream"

class Victim
{
	public :
	Victim();
	Victim(std::string p_name);
	Victim(Victim const & toCopy);
	virtual ~Victim();
	Victim &operator=(Victim const & toCopy);
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;

	private:
	std::string name;

};

std::ostream& operator<<(std::ostream& os, Victim const & toDraw);

#endif
