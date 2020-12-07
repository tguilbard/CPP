/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:06:58 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 11:23:33 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include "iostream"

class AWeapon
{
	private:
	std::string _name;
	int			_dmg;
	int			_ap;

	public:
	AWeapon();
	AWeapon(AWeapon const & toCopy);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon &operator=(AWeapon const &toCopy);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
