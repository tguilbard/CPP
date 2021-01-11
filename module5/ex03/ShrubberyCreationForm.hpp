/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:41:37 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 07:43:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <stdlib.h>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm();

		std::string const target;
		static std::string const trees[3];
		static std::string const &name;

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		virtual ~ShrubberyCreationForm();

		class TargetFileOpenException: public std::exception {
		virtual const char* what() const throw();
		};
		class WriteException: public std::exception {
			virtual const char* what() const throw();
		};

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		void execute(Bureaucrat const &executor) const;
		static Form *generate(std::string const &target);
};

#endif
