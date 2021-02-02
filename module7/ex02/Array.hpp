/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:06:33 by user42            #+#    #+#             */
/*   Updated: 2021/02/02 12:53:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public :
	Array();
	Array(unsigned int n);

	Array(Array<T> const &toCopy);
	Array &operator=(Array const &toCopy);

	virtual ~Array();

	class OutOfBoundsException: public std::exception {
		virtual const char* what() const throw();
	};

	T &operator[](unsigned int i);
	T const &operator[](unsigned int i) const;
	unsigned int size() const;

	private :
	unsigned int _size;
	T *_data;
};

#include "Array.tpp"

#endif
