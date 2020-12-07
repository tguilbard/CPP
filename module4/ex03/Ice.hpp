/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:24:52 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:56:12 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(Ice const &toCopy);
	Ice &operator=(Ice const &toCopy);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif
