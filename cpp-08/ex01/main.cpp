/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:39 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 16:17:21 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(10);

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addManyNumber(3, -100);
		sp.addManyNumber(2, 100);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(42);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}