/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:20:46 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 11:24:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <stdlib.h>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm();

		std::string const target;

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		virtual ~RobotomyRequestForm();

		static std::string const &name;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		void execute(Bureaucrat const &executor) const;
};

#endif
