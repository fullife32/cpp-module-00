/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:23:40 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ScavTrap	kratos("Kratos");
	FragTrap	edward("Edward");
	DiamondTrap	blueDiamond("Blue Diamond");
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	edward.announce();
	blueDiamond.announce();
	std::cout << std::endl;

	edward.highFivesGuys();
	std::cout << std::endl;

	blueDiamond.attack("Geralt");
	geralt.takeDamage(30);
	blueDiamond.attack("kratos");
	kratos.takeDamage(30);
	blueDiamond.attack("kratos");
	kratos.takeDamage(30);
	blueDiamond.attack("kratos");
	kratos.takeDamage(30);
	blueDiamond.attack("kratos");
	kratos.takeDamage(30);
	edward.beRepaired(50);
	std::cout << std::endl;

	blueDiamond.whoAmI();
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	edward.announce();
	blueDiamond.announce();
	std::cout << std::endl;

	return 0;
}