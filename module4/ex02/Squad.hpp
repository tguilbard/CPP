/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 09:42:24 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/10 10:48:33 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct 			SMarineList
{
	ISpaceMarine		*marine;
	struct SMarineList	*next;
}						TMarineList;

class Squad : public ISquad
{
	public :
	Squad();
	Squad(Squad const &toCopy);
	virtual ~Squad();
	Squad &operator=(Squad const &toCopy);
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int num) const;
	virtual int push(ISpaceMarine *add);

	private :
	int			_unit;
	TMarineList	*_marine;
};

#endif
