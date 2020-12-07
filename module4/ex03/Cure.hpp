/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:24:52 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 10:45:54 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(Cure const &toCopy);
	Cure &operator=(Cure const &toCopy);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif
