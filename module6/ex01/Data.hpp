/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:09:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/21 12:29:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <limits>
#include <string>
#include <stdlib.h>
#include <time.h>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;	
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
