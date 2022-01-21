/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:12:36 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 19:50:25 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "address of the string :" << std::endl;
	std::cout << "- in memory :        " << &string << std::endl;
	std::cout << "- by the pointer :   " << stringPTR << std::endl;
	std::cout << "- by the reference : " << &stringREF << std::endl << std::endl;

	std::cout << "content of the string :" << std::endl;
	std::cout << "- by the pointer   : " << *stringPTR << std::endl;
	std::cout << "- by the reference : " << stringREF << std::endl;
	return 0;
}