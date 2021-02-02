/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:40:26 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/22 12:28:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

# include "Victim.hpp"
# include "iostream"

class Test : public Victim
{
	public :
	Test();
	Test(std::string p_name);
	Test(Test const & toCopy);
	virtual ~Test();
	Test &operator=(Test const & toCopy);
	virtual void getPolymorphed(void) const;

};

#endif
