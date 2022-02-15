/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/15 15:48:31 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main( int ac, char *av[] ) {
	if (ac != 2) {
		std::cout << "One argument is required" << std::endl;
		return 1;
	}
	Convert	nb(av[1]);
	nb.printConvert();
	return 0;
}