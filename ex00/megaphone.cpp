/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:02:25 by eassouli          #+#    #+#             */
/*   Updated: 2021/12/20 15:19:54 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <locale>

void	toupper_str(std::string str) {

	std::locale	loc;

	for ( std::string::size_type i = 0; i < str.length(); ++i )
		std::cout << std::toupper( str[i], loc );
}

int		main(int ac, char **av) {
	
	if ( ac == 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for ( int i = 1; i < ac; ++i )
			toupper_str( av[i] );
		std::cout << std::endl;
	}
	return 0;
}