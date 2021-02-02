/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:27:58 by user42            #+#    #+#             */
/*   Updated: 2021/02/02 11:39:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T& x, T& y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T&	min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
}

template<typename T>
T&	max(T& x, T& y)
{
	if (x > y)
		return (x);
	return (y);
}
