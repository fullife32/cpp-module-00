/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 16:27:14 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {
	try {
		Intern	someRandomIntern;
		Form*	rrf;

		std::cout << "Not existing Form test:" << std::endl;
		rrf = someRandomIntern.makeForm("notExistingForm", "Hello World!");
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	antoine("Antoine", 1);
		Intern	someRandomIntern;
		Form*	rrf;

		std::cout << std::endl << "Existing Shrubbery Form test:" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "home");
		antoine.signForm(*rrf);
		antoine.executeForm(*rrf);
		delete rrf;

		std::cout << std::endl << "Existing Form test:" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		antoine.signForm(*rrf);
		antoine.executeForm(*rrf);
		delete rrf;

		std::cout << std::endl << "Existing Form test:" << std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "michel");
		antoine.signForm(*rrf);
		antoine.executeForm(*rrf);
		delete rrf;

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}