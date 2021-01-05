/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:08:00 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/04 10:49:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :
	Fixed();
	~Fixed();
	void operator=(Fixed const & toCopy);
	Fixed(Fixed const & toCopy);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	private :
	int value;
	const static int nbBits = 8;

};

#endif
