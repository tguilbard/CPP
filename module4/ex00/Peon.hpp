/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:40:26 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/08 12:05:55 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include "iostream"
using namespace std;

class Peon : public Victim
{
	public :
	Peon();
	Peon(string p_name);
	Peon(Peon const & toCopy);
	~Peon();
	Peon &operator=(Peon const & toCopy);
	virtual void getPolymorphed(void) const;

};

#endif
