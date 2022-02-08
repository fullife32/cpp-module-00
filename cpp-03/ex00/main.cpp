/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:20:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ClapTrap	kratos("Kratos");

	std::cout << std::endl;
	geralt.announce();
	kratos.announce();
	std::cout << std::endl;

	kratos.attack("Geralt");
	geralt.takeDamage(0);
	geralt.beRepaired(5);
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	geralt.attack("Kratos");
	std::cout << std::endl;

	kratos.takeDamage(10);
	kratos.beRepaired(10);
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	std::cout << std::endl;


	return 0;
}