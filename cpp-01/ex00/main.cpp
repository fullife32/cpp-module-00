/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:12:36 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 18:36:21 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	george = Zombie("George");
	Zombie*	bernard = newZombie("Bernard");

	george.announce();
	bernard->announce();

	randomChump("Tony");

	delete bernard;
	return 0;
}