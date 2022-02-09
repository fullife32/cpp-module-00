/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:43:56 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main ( void ) {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* charly = new Dog("Charly");
	const Animal* cat = new Cat();
	const Animal* bella = new Cat("Bella");
	std::cout << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongAnimal* berly = new WrongCat("Berly");
	std::cout << std::endl;


	std::cout << dog->getType() << " is a Dog" << std::endl;
	std::cout << charly->getType() << " is a Dog" << std::endl;
	std::cout << cat->getType() << " is a Cat" << std::endl;
	std::cout << bella->getType() << " is a Cat" << std::endl << std::endl;

	std::cout << wrongCat->getType() << " is a WrongCat" << std::endl;
	std::cout << berly->getType() << " is a WrongCat" << std::endl << std::endl;

	meta->makeSound();
	dog->makeSound();
	charly->makeSound();
	cat->makeSound();
	bella->makeSound();
	std::cout << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();
	berly->makeSound();
	std::cout << std::endl;

	delete berly;
	delete wrongCat;
	delete wrongMeta;
	std::cout << std::endl;

	delete bella;
	delete cat;
	delete charly;
	delete dog;
	delete meta;

	return 0;
}