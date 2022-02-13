/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/13 22:05:29 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat	antoine("Antoine", 0);
	}
	catch (std::exception& e) {
		std::cout << "Construction Too High test:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	david("David", 151);
	}
	catch (std::exception& e) {
		std::cout << std::endl << "Construction Too Low test:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	lylian("Lylian", 1);
		std::cout << std::endl << "Up grade out of range test:" << std::endl;
		std::cout << lylian << std::endl;
		lylian.downGrade();
		std::cout << lylian << std::endl;
		lylian.upGrade();
		std::cout << lylian << std::endl;
		lylian.upGrade();
		std::cout << lylian << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	tony("Tony", 150);
		std::cout << std::endl << "Down grade out of range test:" << std::endl;
		std::cout << tony << std::endl;
		tony.downGrade();
		std::cout << tony << std::endl;
		tony.upGrade();
		std::cout << tony << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}