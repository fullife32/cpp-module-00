/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:12:36 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 19:33:06 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	N = 10;
	Zombie*	horde = zombieHorde(N, "Tony");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
	return 0;
}