/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:48:15 by tguilbar          #+#    #+#             */
/*   Updated: 2020/06/09 11:56:19 by tguilbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "iostream"

class Enemy
{
	private:
	int _hp;
	std::string _type;

	public:
	Enemy();
	Enemy(Enemy const &toCopy);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &toCopy);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int dmg);
};

#endif
