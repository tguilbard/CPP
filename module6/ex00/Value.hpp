/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:31:36 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 12:26:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUE_HPP
# define VALUE_HPP

#include <iostream>
#include <sstream>
#include <cmath>
#include <limits>

class Value
{
	public :
	Value(std::string str);
	virtual ~Value();

	Value(const Value & toCopy);
	Value &operator=(const Value & toCopy);

	void parse();

	int getInt() const;
	char getChar() const;
	float getFloat() const;
	double getDouble() const;
	char getFlag() const;

	bool fDecimal() const;
	bool dDecimal() const;
	bool isFloatValue() const;
	bool isDoubleValue() const;

	void convert();
	void fromChar();
	void fromInt();
	void fromFloat();
	void fromDouble();

	static const int charImp = 1 << 0;
	static const int nonDisp = 1 << 1;
	static const int intImp = 1 << 2;
	static const int floatImp = 1 << 3;
	static const int doubleImp = 1 << 4;

	private :
	Value();

	std::string _str;
	int			_type;
	char		_flag;

	int			_iValue;
	float		_fValue;
	double		_dValue;
	char		_cValue;

	enum Type {
		TypeChar,
		TypeInt,
		TypeFloat,
		TypeDouble,
		TypeInvalid
	};
};

std::ostream &operator<<(std::ostream &os, Value const &toDraw);

#endif
