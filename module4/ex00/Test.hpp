/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguilbar <tguilbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 11:40:26 by tguilbar          #+#    #+#             */
/*   Updated: 2021/01/19 10:32:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

# include "Victim.hpp"
# include "iostream"
using namespace std;

class Test : public Victim
{
	public :
	Test();
	Test(string p_name);
	Test(Test const & toCopy);
	virtual ~Test();
	Test &operator=(Test const & toCopy);
	virtual void getPolymorphed(void) const;

};

#endif
