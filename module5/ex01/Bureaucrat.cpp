/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:33:52 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 10:26:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
_name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy) :
_name(toCopy._name), _grade(toCopy._grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();	
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toCopy)
{
	this->_grade = toCopy._grade;

	return (*this);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

void	Bureaucrat::incrementGrade()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException : Grade too Low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException : Grade too High");
}

void	Bureaucrat::signForm(Form &Form) const
{
	try
	{
		Form.beSigned(*this);
		std::cout << _name << " signs " << Form.getName() << std::endl; 
	}
	catch(std::exception const &e)
	{
		std::cerr << _name << " cant sign " << Form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &toDraw)
{
	os << toDraw.getName() << ", bureaucrat grade " << toDraw.getGrade();
	return (os);
}
