/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:22:44 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 11:07:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"

class Form
{
	public :
	Form(std::string name, int signeGrade, int execGrade);
	Form(Form const &toCopy);
	virtual ~Form();

	Form &operator=(Form const &toCopy);

	bool getState() const;
	std::string getName() const;
	int getSigneGrade() const;
	int getExecGrade() const;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class FormAlreadySignedException : public std::exception
	{
		virtual const char* what() const throw();
	};


	void beSigned(Bureaucrat Bureaucrat);

	private :
	Form();
	bool _state;
	std::string const _name;
	int const _signeGrade;
	int const _execGrade;
};

std::ostream& operator<<(std::ostream& os, Form const & toDraw);

#endif
