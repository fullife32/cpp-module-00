/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:20:42 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ScavTrap	kratos("Kratos");
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	std::cout << std::endl;

	kratos.guardGate();
	geralt.attack("Kratos");
	kratos.attack("Geralt");
	geralt.takeDamage(20);
	geralt.beRepaired(20);
	std::cout << std::endl;

	geralt.announce();
	kratos.announce();
	std::cout << std::endl;

	return 0;
}