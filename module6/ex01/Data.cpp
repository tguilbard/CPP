/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:43:45 by user42            #+#    #+#             */
/*   Updated: 2021/01/21 12:35:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void	*serialize(void)
{
	static std::string alnum = "0123456789" \
				"abcdefghijklmnopqrstuvwxyz" \
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static size_t alnumSize = alnum.length();
	char	*ret;
	size_t	size;
	size_t	i;

	size = sizeof(char) * 16 + sizeof(int);
	ret = static_cast<char*>(::operator new (size));
	i = 0;
	/*****S1*****/
	for (; i < 8; i++)
		ret[i] = alnum[rand() % alnumSize];
	/*****INT****/
	*reinterpret_cast<unsigned int*>(ret + 8) = rand() % std::numeric_limits<unsigned int>::max();
	i += sizeof(int);
	/*****S2*****/
	for (; i < size; i++)
		ret[i] = alnum[rand() % alnumSize];

	return (ret);
}

Data	*deserialize(void *raw)
{
	Data *ret = new Data;

	ret->s1 = std::string(static_cast<char*>(raw), 8);
	ret->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	ret->s2	= std::string(static_cast<char*>(raw) + 8 + sizeof(int), 8);

	return (ret);
}
