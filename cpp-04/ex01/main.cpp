/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 16:34:39 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main ( void ) {
	Animal*	tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Cat();
	std::cout << std::endl;
	for (int i = 5; i < 10; i++)
		tab[i] = new Dog();
	std::cout << std::endl;
	
	tab[0]->makeSound();
	tab[0]->printIdeas();
	std::cout << std::endl;
	tab[5]->makeSound();
	tab[5]->printIdeas();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete tab[i];
	std::cout << std::endl;

	std::cout << "Deep Copy Test:" << std::endl;
	Cat  first;
	{
		Cat second;
		first = second;
	}
	std::cout << std::endl;
	first.printIdeas();
	std::cout << std::endl;

	return 0;
}