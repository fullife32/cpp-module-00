/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:12:37 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/12 18:28:16 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	tmp = 0;

	std::cout << std::endl;

	IMateriaSource* source = new MateriaSource();
	ICharacter* marley = new Character("marley");

	std::cout << "Out of range and no item test:" << std::endl;
	marley->use(4, *marley);
	marley->use(0, *marley);
	marley->equip(tmp);
	std::cout << std::endl;

	std::cout << "False Materia and too many materias test:" << std::endl;
	tmp = source->createMateria("ice");

	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Cure());
	source->learnMateria(new Cure());
	source->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "Inventory full test:" << std::endl;
	tmp = source->createMateria("ice");
	marley->equip(tmp);
	tmp = source->createMateria("cure");
	marley->equip(tmp);
	tmp = source->createMateria("cure");
	marley->equip(tmp);
	tmp = source->createMateria("cure");
	marley->equip(tmp);
	tmp = source->createMateria("cure");
	marley->equip(tmp);
	std::cout << std::endl;

	std::cout << "Unequip test:" << std::endl;
	marley->unequip(4);
	marley->unequip(0);
	marley->unequip(1);
	marley->unequip(2);
	marley->unequip(3);
	marley->unequip(0);
	tmp = source->createMateria("cure");
	marley->equip(tmp);
	marley->unequip(0);

	delete marley;
	delete source;
	
	return 0;
}