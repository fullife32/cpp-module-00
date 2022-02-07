/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/07 23:24:29 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ScavTrap	kratos("Kratos");

	std::cout << std::endl;
	kratos.attack("Geralt");
	geralt.takeDamage(20);
	geralt.beRepaired(20);
	kratos.guardGate();
	geralt.attack("Kratos");
	std::cout << std::endl;

	return 0;
}