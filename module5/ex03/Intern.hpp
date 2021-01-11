/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 07:35:40 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 07:36:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		class Pair {
		private:
			Pair();

			std::string const name;
			Form *(*fct)(std::string const &);
		public:
			Pair(std::string const &name, Form *(*fct)(std::string const &));
			Pair(Pair const &other);
			virtual ~Pair();

			Pair &operator=(Pair const &other);

			bool correspond(std::string const &name) const;
			Form *execute(std::string const &target) const;
		};
		Pair *generators[9];
	public:
		Intern();
		Intern(Intern const &other);
		virtual ~Intern();

		class FormDoesNotExistException: public std::exception {
			virtual const char* what() const throw();
		};

		Intern &operator=(Intern const &other);

		Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif
