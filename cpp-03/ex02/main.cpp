/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:21:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ScavTrap	kratos("Kratos");
	FragTrap	edward("Edward");
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	edward.announce();
	std::cout << std::endl;

	edward.highFivesGuys();
	kratos.guardGate();
	geralt.attack("Kratos");
	kratos.attack("Geralt");
	geralt.takeDamage(20);
	geralt.beRepaired(20);
	std::cout << std::endl;

	edward.attack("Kratos");
	kratos.takeDamage(30);
	edward.attack("Kratos");
	kratos.takeDamage(30);
	edward.attack("Kratos");
	kratos.takeDamage(30);
	edward.attack("Kratos");
	kratos.takeDamage(30);
	kratos.beRepaired(10);
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	edward.announce();
	std::cout << std::endl;

	return 0;
}