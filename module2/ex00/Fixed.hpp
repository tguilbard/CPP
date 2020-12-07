/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:08:00 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/01 15:56:47 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :
	Fixed();
	~Fixed();
	Fixed operator=(Fixed const & toCopy);
	Fixed(Fixed const & toCopy);
	Fixed(Fixed &&) = default;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	private :
	int value;
	const static int nbBits = 8;

};

#endif
