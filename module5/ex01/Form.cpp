/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:50:18 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 11:07:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signeGrade, int execGrade) :
_name(name), _signeGrade(signeGrade), _execGrade(execGrade)
{
	_state = false;
	if (_signeGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signeGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();	
}

Form::Form(Form const &toCopy) :
_name(toCopy._name), _signeGrade(toCopy._signeGrade), _execGrade(toCopy._execGrade)
{
	_state = toCopy._state;
	if (_signeGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signeGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form &Form::operator=(Form const &toCopy)
{
	_state = toCopy._state;
	return (*this);
}

bool Form::getState() const
{
	return (_state);
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getSigneGrade() const
{
	return (_signeGrade);
}

int Form::getExecGrade() const
{
	return (_execGrade);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FormException : Grade too Low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FormException : Grade too High");
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
}

void Form::beSigned(Bureaucrat Bureaucrat)
{
	if (Bureaucrat.getGrade() > _signeGrade)
		throw Form::GradeTooLowException();
	else if (this->_state)
		throw Form::FormAlreadySignedException();
	this->_state = true;
}

std::ostream&	operator<<(std::ostream &os, Form const &toDraw)
{
	os  << toDraw.getName() << "[" << ((toDraw.getState()) ? "Signed" : "Unsigned")
		<< "]<Signe Grade: " << toDraw.getSigneGrade() << ", Execute Grade: "
		<< toDraw.getExecGrade() << ">";
	return (os);
}
