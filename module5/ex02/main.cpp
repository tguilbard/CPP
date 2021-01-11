/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <tguilbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:37:29 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 11:52:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(francis);

	Form *pres = new PresidentialPardonForm("Francis");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	supervisor.signForm(*robot);
	robot->execute(francis);
	francis.executeForm(*robot);
	francis.executeForm(*robot);

	std::cout << "---" << std::endl;

	std::cout << *pres << std::endl;
	francis.executeForm(*pres);

	std::cout << "---" << std::endl;

	Form robot1 = RobotomyRequestForm("Bender");
	std::cout << robot1 << std::endl;
	supervisor.executeForm(robot1);

	std::cout << "---" << std::endl;

	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	francis.executeForm(*pres);

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
