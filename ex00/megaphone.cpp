/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:02:25 by eassouli          #+#    #+#             */
/*   Updated: 2021/12/18 18:33:42 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>

int		main(int ac, char **av) {
	
	int		i;
	char	*str = NULL;

	if (ac == 1)
		std::cout << "* LOUD AND UNBREARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			strcat(str, av[i]);
			i++;
		}
		i = 0;
		while (str[i])
		{
			str[i] = toupper(str[i]);
			i++;
		}
		std::cout << str << std::endl;
	}
	return 0;
}