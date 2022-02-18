/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:39 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 18:20:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

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
		sp.addNumber(45);
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

	Span spBig = Span(50000);

	try {
		spBig.addManyNumber(30000, 50000);
		spBig.addManyNumber(15000, 20);
		spBig.addManyNumber(5000, -50000);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		spBig.addManyNumber(1, 200);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << spBig.shortestSpan() << std::endl;
		std::cout << spBig.longestSpan() << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}