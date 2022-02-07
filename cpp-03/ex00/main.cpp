/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:44:05 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/07 18:07:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {
	ClapTrap	geralt("Geralt");
	ClapTrap	kratos("Kratos");

	kratos.attack("geralt");
	geralt.takeDamage(5);
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
	kratos.takeDamage(10);
	kratos.beRepaired(10);

	return 0;
}