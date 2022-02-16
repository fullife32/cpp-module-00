/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/16 16:08:59 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	int	random;

	srand(time(NULL) + rand() % 1000);
	random = rand() % 3;

	if (random == 0) {
		std::cout << "A class created :          ";
		return new A;
	}
	else if (random == 1) {
		std::cout << "B class created :          ";
		return new B;
	}
	else {
		std::cout << "C class created :          ";
		return new C;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Identified by ptr as an A: " << p << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified by ptr as a B : " << p << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified by ptr as a C : " << p << std::endl;
	else
		std::cout << "Can't identify this      : " << p << std::endl;
}

void	identify(Base& p) {
	try {
		A	a = dynamic_cast<A&>(p);
		std::cout << "Identified by ref as an A: " << &p << std::endl;
	}
	catch (std::exception& e) { }
	try {
		B	b = dynamic_cast<B&>(p);
		std::cout << "Identified by ref as a B : " << &p << std::endl;
	}
	catch (std::exception& e) { }
	try {
		C	c = dynamic_cast<C&>(p);
		std::cout << "Identified by ref as a C : " << &p << std::endl;
	}
	catch (std::exception& e) { }
}

int	main() {
	Base*	test;
	Base*	test1;
	Base*	test2;

	test = generate();
	std::cout << test << std::endl;
	identify(test);
	identify(*test);
	std::cout << std::endl;

	test1 = generate();
	std::cout << test1 << std::endl;
	identify(test1);
	identify(*test1);
	std::cout << std::endl;
	
	test2 = generate();
	std::cout << test2 << std::endl;
	identify(test2);
	identify(*test2);

	delete test;
	delete test1;
	delete test2;
	return 0;
}