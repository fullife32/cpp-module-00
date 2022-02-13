/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/13 23:56:50 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Form	formTooHigh("Too High", 0, 10);
	}
	catch (std::exception& e) {
		std::cout << "Construction Too High test:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		Form	formTooHigh("Too High", 10, 0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form	formTooLow("Too Low", 151, 100);
	}
	catch (std::exception& e) {
		std::cout << std::endl << "Construction Too Low test:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		Form	formTooLow("Too Low", 100, 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	antoine("Antoine", 100);
		Form	form_49_3("Form 49.3", 99, 99);

		std::cout << std::endl << "Form Too High To beSigned() test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << form_49_3 << std::endl;
		form_49_3.beSigned(antoine);
		std::cout << form_49_3 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 100);
		Form	form_49_3("Form 49.3", 99, 99);

		std::cout << std::endl << "Bureaucrat Upgraded To beSigned() test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << form_49_3 << std::endl;
		antoine.upGrade();
		std::cout << antoine << std::endl;
		form_49_3.beSigned(antoine);
		std::cout << form_49_3 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	antoine("Antoine", 2);
		Form	form_49_3("Form 49.3", 1, 1);

		std::cout << std::endl << "Bureaucrat Too Low To signForm() test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << form_49_3 << std::endl;
		antoine.signForm(form_49_3);
		std::cout << form_49_3 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	antoine("Antoine", 2);
		Form	form_49_3("Form 49.3", 1, 1);

		std::cout << std::endl << "Bureaucrat Upgraded To signForm() test:" << std::endl;
		std::cout << antoine << std::endl;
		std::cout << form_49_3 << std::endl;
		antoine.upGrade();
		std::cout << antoine << std::endl;
		antoine.signForm(form_49_3);
		std::cout << form_49_3 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}