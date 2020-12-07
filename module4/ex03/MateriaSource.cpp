/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 12:03:48 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/15 12:17:56 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_mem[0] = NULL;
	_mem[1] = NULL;
	_mem[2] = NULL;
	_mem[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	_mem[0] = toCopy._mem[0]->clone();
	_mem[1] = toCopy._mem[1]->clone();
	_mem[2] = toCopy._mem[2]->clone();
	_mem[3] = toCopy._mem[3]->clone();
}

MateriaSource &MateriaSource::operator=(MateriaSource const &toCopy)
{
	if (this != &toCopy)
	{
		_mem[0] = toCopy._mem[0]->clone();
		_mem[1] = toCopy._mem[1]->clone();
		_mem[2] = toCopy._mem[2]->clone();
		_mem[3] = toCopy._mem[3]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	delete _mem[0];
	delete _mem[1];
	delete _mem[2];
	delete _mem[3];
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i;

	i = 0;
	while (_mem[i] != NULL && i < 4)
		i++;
	if (i < 4)
	{
		_mem[i] = m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (_mem[i] != NULL && i < 4)
	{
		if (_mem[i]->getType() == type)
		{
			 return (_mem[i]->clone());
		}
		i++;
	}
	return (NULL);
}
