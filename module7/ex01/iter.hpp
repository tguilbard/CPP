/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:25:15 by user42            #+#    #+#             */
/*   Updated: 2021/02/02 11:39:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	iter(T* adr, size_t length, void (*f)(T &elt))
{
	for (size_t i = 0; i < length; i++)
		(*f)(adr[i]);
}
