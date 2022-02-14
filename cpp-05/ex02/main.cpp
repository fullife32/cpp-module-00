/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:51:37 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	/* Shrubbery Creation Form */
	try {
		Bureaucrat	antoine("Antoine", 150);
		ShrubberyCreationForm	tree("not_planted");

		std::cout << "Not Signed Shrubbery Form test:" << std::endl;
		std::cout << tree << std::endl;
		antoine.executeForm(tree);
		tree.execute(antoine);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 140);
		ShrubberyCreationForm	tree("still_not_planted");

		std::cout << std::endl << "Not Up Graded To Execute Shrubbery Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << tree << std::endl;
		antoine.signForm(tree);
		std::cout << tree << std::endl;
		antoine.executeForm(tree);
		tree.execute(antoine);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 130);
		ShrubberyCreationForm	tree("planted");

		std::cout << std::endl << "Working Shrubbery Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << tree << std::endl;
		antoine.signForm(tree);
		std::cout << tree << std::endl;
		antoine.executeForm(tree);
		tree.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	/* Robotomized Request Form */
	try {
		Bureaucrat	antoine("Antoine", 80);
		RobotomyRequestForm	robot("not_robotomized");

		std::cout << std::endl << std::endl << "Not Signed Form Robotomized Form test:" << std::endl;
		std::cout << robot << std::endl;
		antoine.executeForm(robot);
		robot.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 70);
		RobotomyRequestForm	robot("still_not_robotomized");

		std::cout << std::endl << "Not Up Graded To Execute Robotomized Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << robot << std::endl;
		antoine.signForm(robot);
		std::cout << robot << std::endl;
		antoine.executeForm(robot);
		robot.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 45);
		RobotomyRequestForm	robot("Antoine brain");

		std::cout << std::endl << "Working Robotomized Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << robot << std::endl;
		antoine.signForm(robot);
		std::cout << robot << std::endl;
		antoine.executeForm(robot);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
		robot.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	/* Presidential Pardon Form */
	try {
		Bureaucrat	antoine("Antoine", 30);
		PresidentialPardonForm	president("not_pardoned");

		std::cout << std::endl << std::endl << "Not Signed Presidential Form test:" << std::endl;
		std::cout << president << std::endl;
		antoine.executeForm(president);
		president.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 20);
		PresidentialPardonForm	president("still_not_pardoned");

		std::cout << std::endl << "Not Up Graded To Execute Presidential Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << president << std::endl;
		antoine.signForm(president);
		std::cout << president << std::endl;
		antoine.executeForm(president);
		president.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 5);
		PresidentialPardonForm	president("Antoine The Worker");

		std::cout << std::endl << "Working Presidential Form test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << president << std::endl;
		antoine.signForm(president);
		std::cout << president << std::endl;
		antoine.executeForm(president);
		president.execute(antoine);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}