/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pagesBlanches.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:05:40 by eassouli          #+#    #+#             */
/*   Updated: 2021/12/20 17:59:11 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "contact.hpp"
#include <iostream>

int	main() {

	PhoneBook	phoneBook;
	std::string	buff;
	int			exit = 0; // move to class

	while (exit == 0)
	{
		std::cout << "You can : ADD, SEARCH or EXIT: ";
		std::cin >> buff;
		if (buff == "EXIT") // define
			exit = 1;
		else if (buff == "ADD") // define
			phoneBook.addContact();
		else if (buff == "SEARCH") // define
			phoneBook.searchContact();
		else
			std::cout << "Incorrect Input" << std::endl;
	}
}