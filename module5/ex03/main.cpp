/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:37:29 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 07:56:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));
	Intern someIntern;

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	std::cout << "---" << std::endl;

	Form *shrub = someIntern.makeForm("Shrubbery Creation", "home");
	std::cout << *shrub << std::endl;
	supervisor.signForm(*shrub);
	francis.executeForm(*shrub);

	std::cout << "---" << std::endl;

	Form *pres = someIntern.makeForm("Presidential Pardon", "Francis");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	supervisor.executeForm(*pres);

	std::cout << "---" << std::endl;

	Form *robot = someIntern.makeForm("Robotomy Request", "Bender");
	std::cout << *robot << std::endl;
	supervisor.signForm(*robot);
	francis.executeForm(*robot);
	francis.executeForm(*robot);

	std::cout << "---" << std::endl;

	try
	{
		Form *ran = someIntern.makeForm("Random Form", "nobody");
		std::cout << ran << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
