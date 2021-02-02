/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:40:26 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:27:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include "iostream"

class Peon : public Victim
{
	public :
	Peon();
	Peon(std::string p_name);
	Peon(Peon const & toCopy);
	virtual ~Peon();
	Peon &operator=(Peon const & toCopy);
	virtual void getPolymorphed(void) const;

};

#endif
