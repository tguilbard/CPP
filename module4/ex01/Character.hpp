/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 12:15:14 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 12:52:31 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "iostream"
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
	std::string _name;
	int _ap;
	AWeapon	*_wpn;

	public:
	Character();
	Character(Character const &toCopy);
	Character(std::string const & name);
	~Character();
	Character &operator=(Character const &toCopy);
	void recoverAP();
	void equip(AWeapon *wpn);
	void attack(Enemy *mob);
	std::string getName() const;
	int getAP() const;
	AWeapon	*getWeapon() const;
};

std::ostream& operator<<(std::ostream& os, Character const &toDraw);

#endif
