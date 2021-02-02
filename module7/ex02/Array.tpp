/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:19:46 by user42            #+#    #+#             */
/*   Updated: 2021/02/02 12:48:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _size(0), _data(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(0)
{
	_data = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &toCopy) : _size(toCopy._size), _data(0)
{
	if (_size > 0)
		*this = toCopy;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &toCopy)
{
	if (_size > 0)
		delete[] _data;
	_data = 0;
	if (toCopy._size > 0)
	{
		_data = new T[toCopy._size]();
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = toCopy._data[i];
	}
	_size = toCopy._size;

	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	if (_size > 0)
		delete[] _data;
}

template<typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw Array::OutOfBoundsException();
	return _data[i];
}

template<typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	return operator[](i);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
