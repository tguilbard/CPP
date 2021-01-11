/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:17:40 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 11:26:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	public :
	Bureaucrat(std::string const &name, int grade);
	virtual ~Bureaucrat();

	Bureaucrat(Bureaucrat const &toCopy);
	Bureaucrat &operator=(Bureaucrat const &toCopy);

	int			getGrade() const;
	std::string	getName() const;

	void	incrementGrade(void);
	void	decrementGrade(void);
	
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void signForm(Form &Form) const;
	void executeForm(Form const &form) const;

	private :
	Bureaucrat();
	std::string const _name;
	int _grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & toDraw);

#endif
