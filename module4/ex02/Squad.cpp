/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 09:52:06 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/10 10:57:35 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	_unit = 0;
	_marine = NULL;
}

Squad::Squad(Squad const &toCopy)
{
	TMarineList *act;
	TMarineList *Nact;
	int i;

	_unit = toCopy.getCount();

	act = _marine;
	while (act != NULL)
	{
		Nact = act->next;
		delete act->marine;
		delete act;
		act = Nact;
	}
	i = 0;
	_marine = new TMarineList;
	act = _marine;
	while (i < _unit - 1)
	{
		act->marine = toCopy.getUnit(i)->clone();
		act->next = new TMarineList;
		act = act->next;
		i++;
	}
	act->marine = toCopy.getUnit(i);
	act->next = NULL;
}

Squad::~Squad()
{
	TMarineList *act;
	TMarineList *Nact;

	act = _marine;
	while (act != NULL)
	{
		Nact = act->next;
		delete act->marine;
		delete act;
		act = Nact;
	}
}

Squad &Squad::operator=(Squad const &toCopy)
{
	if (this != &toCopy)
	{
		TMarineList *act;
		TMarineList *Nact;
		int i;

		_unit = toCopy.getCount();

		act = _marine;
		while (act != NULL)
		{
			Nact = act->next;
			delete act->marine;
			delete act;
			act = Nact;
		}
		i = 0;
		_marine = new TMarineList;
		act = _marine;
		while (i < _unit - 1)
		{
			act->marine = toCopy.getUnit(i)->clone();
			act->next = new TMarineList;
			act = act->next;
			i++;
		}
		act->marine = toCopy.getUnit(i);
		act->next = NULL;
	}
	return (*this);
}

int Squad::getCount() const
{
	return (_unit);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	int i;
	TMarineList *act;

	i = 0;
	act = _marine;
	if (num < _unit)
	{
		while (i < num)
		{
			act = act->next;
			i++;
		}
		return (act->marine);
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *add)
{
	TMarineList *act;

	if (add != NULL)
	{
		act = _marine;
		if (act == NULL)
		{
			_marine = new TMarineList;
			_marine->marine = add;
			_marine->next = NULL;
			_unit++;
			return (_unit);
		}
		while (act->next != NULL)
		{
			if (act->marine == add)
				return (_unit);
			act = act->next;
		}
		act->next = new TMarineList;
		act->next->marine = add;
		act->next->next = NULL;
		_unit++;
		return (_unit);
	}
	return (_unit);
}
