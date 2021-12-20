/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:02:25 by eassouli          #+#    #+#             */
/*   Updated: 2021/12/20 14:57:25 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdio.h>
# include <ctype.h>

void	toupper_str(char *str) {

	for (int i = 0; str[i]; i++)
		putchar(toupper(str[i]));
}

int		main(int ac, char **av) {
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			toupper_str(av[i]);
		std::cout << std::endl;
	}
	return 0;
}