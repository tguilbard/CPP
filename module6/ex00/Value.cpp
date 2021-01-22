/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:47:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 12:35:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Value.hpp"


Value::Value(std::string str) : _str(str), _flag(0)
{
	parse();
	if (_type != TypeInvalid)
	{
		convert();
		if (_flag & Value::intImp || _iValue > 127 || _iValue < 0)
			_flag |= Value::charImp;
		if (!std::isprint(_cValue))
			_flag |= Value::nonDisp;
	}
	else
	{
		_flag |= Value::charImp;
		_flag |= Value::intImp;
		_flag |= Value::floatImp;
		_flag |= Value::doubleImp;
	}
}

Value::~Value()
{
}

Value::Value()
{
}

Value::Value(const Value & toCopy)
{
	*this = toCopy;
}

Value& Value::operator=(const Value & toCopy)
{
	_str = toCopy._str;
	_type = toCopy._type;
	_iValue = toCopy._iValue;
	_fValue = toCopy._fValue;
	_dValue = toCopy._dValue;
	_cValue = toCopy._cValue;

	return (*this);
}

void Value::parse()
{
	std::stringstream ss;
	size_t length = _str.length();
	size_t i = 0;

	if (length == 1 && !std::isdigit(_str[0]))
	{
		_type = TypeChar;
		_cValue = _str[0];
		return ;
	}
	if (_str[0] == '+' || _str[0] == '-')
		ss << _str[i++];
	_type = TypeInt;
	for ( ; i < length; i++)
	{
		if (_str[i] == '.' && _type != TypeDouble)
		{
			_type = TypeDouble;
			ss << _str[i];
		}
		else if (_str[i] == 'e' && i < length - 1
			&& (_str[i + 1] == '-'
				|| _str[i + 1] == '+'
				|| std::isdigit(_str[i + 1])))
		{
			ss << _str[i] << _str[i + 1];
			i++;
			_type = TypeDouble;
		}
		else if (_str[i] == 'f' && i == length - 1 && _type == TypeDouble)
			_type = TypeFloat;
		else if (!std::isdigit(_str[i]))
		{
			_type = TypeInvalid;
			i = length;
		}
		else
			ss << _str[i];
	}
	if (_type == TypeFloat)
		ss >> _fValue;
	else if (_type == TypeDouble)
		ss >> _dValue;
	else if (_type == TypeInt)
	{
		long lValue;
		ss >> lValue;
		_iValue = lValue;
		if (ss.fail()
			|| lValue > std::numeric_limits<int>::max()
			|| lValue < std::numeric_limits<int>::min())
			_type = TypeInvalid;
	}
	else if (_type == TypeInvalid)
	{
		if (_str == "inff" || _str == "-inff" || _str == "+inff"
			|| _str == "nanf")
		{
			_fValue = atof(_str.c_str());
			_type = TypeFloat;
		}
		else if (_str == "inf" ||  _str == "-inf" || _str == "+inf"
				|| _str == "nan")
		{
			_dValue = atof(_str.c_str());
			_type = TypeDouble;
		}
	}
}
int Value::getInt() const
{
	return (_iValue);
}

char Value::getChar() const
{
	return (_cValue);
}

float Value::getFloat() const
{
	return (_fValue);
}

double Value::getDouble() const
{
	return (_dValue);
}

char Value::getFlag() const
{
	return (_flag);
}

bool Value::fDecimal() const
{
	return ((_fValue - (float)_iValue) != 0);
}

bool Value::dDecimal() const
{
	return ((_dValue - (double)_iValue) != 0);
}

bool Value::isFloatValue() const
{
	return (!(std::isnan(_fValue) || std::isinf(_fValue)));
}

bool Value::isDoubleValue() const
{
	return (!(std::isnan(_dValue) || std::isinf(_dValue)));
}

void Value::convert()
{
	switch (_type)
	{
	case TypeInt:
		fromInt();
		break;
	case TypeFloat:
		fromFloat();
		break;
	case TypeDouble:
		fromDouble();
		break;
	case TypeChar:
		fromChar();
		break;
	}
}

void Value::fromChar()
{
	_iValue = static_cast<int>(_cValue);
	_fValue = static_cast<float>(_cValue);
	_dValue = static_cast<double>(_cValue);
}

void Value::fromInt()
{
	_fValue = static_cast<float>(_iValue);
	_dValue = static_cast<double>(_iValue);
	_cValue = static_cast<char>(_iValue);
}

void Value::fromFloat()
{
	_iValue = static_cast<int>(_fValue);
	_dValue = static_cast<double>(_fValue);
	_cValue = static_cast<char>(_fValue);
	if (!isFloatValue()
		|| _fValue > std::numeric_limits<int>::max()
		|| _fValue < std::numeric_limits<int>::min())
		_flag |= Value::intImp;
}

void Value::fromDouble()
{
	_iValue = static_cast<int>(_dValue);
	_fValue = static_cast<double>(_dValue);
	_cValue = static_cast<char>(_dValue);
	if (!isDoubleValue()
		|| _dValue > std::numeric_limits<int>::max()
		|| _dValue < std::numeric_limits<int>::min())
		_flag |= Value::intImp;
}

std::ostream &operator<<(std::ostream &os, Value const &toDraw)
{
	/********************CHAR********************/
	if (toDraw.getFlag() & Value::charImp)
		os << "char: impossible" << std::endl;
	else if (toDraw.getFlag() & Value::nonDisp)
		os << "char: Non displayable" << std::endl;
	else
		os << "char: '" << toDraw.getChar() << "'" << std::endl;

	/********************INT*********************/
	if (toDraw.getFlag() & Value::intImp)
		os << "int: impossible" << std::endl;
	else
		os << "int: " << toDraw.getInt() << std::endl;

	/********************FLOAT*******************/
	if (toDraw.getFlag() & Value::floatImp)
		os << "float: impossible" << std::endl;
	else
	{
		os << "float: " << toDraw.getFloat();
		if (!toDraw.fDecimal() && toDraw.isFloatValue())
			os << ".0";
		os << "f" << std::endl;
	}

	/*******************DOUBLE*******************/
	if (toDraw.getFlag() & Value::doubleImp)
		os << "double: impossible" << std::endl;
	else
	{
		os << "double: " << toDraw.getFloat();
		if (!toDraw.dDecimal() && toDraw.isDoubleValue())
			os << ".0";
		os << std::endl;
	}

	return (os);
}
