/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:24:52 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 11:43:56 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
	std::string _type;
	unsigned int _xp;

	public:
	AMateria(std::string const & type);
	AMateria();
	AMateria(AMateria const &toCopy);
	AMateria &operator=(AMateria const &toCopy);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
