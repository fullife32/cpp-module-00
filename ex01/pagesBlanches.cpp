/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pagesBlanches.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:05:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/20 12:05:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main() {

	PhoneBook	phoneBook;
	std::string	input;
	int			i = 0;
	int			exit = 0; // move to class

	while (exit == 0)
	{
		std::cout << "You can : ADD, SEARCH or EXIT: ";
		std::cin >> input;
		if (input == "EXIT") // define
			exit = 1;
		else if (input == "ADD") // define
		{
			if (i < 8)
			{
				phoneBook.addContact(&phoneBook.contact[i]);
				i++;
			}
			else
				std::cout << "Sorry, the phonebook is already full" << std::endl;
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
				std::cout << "No contact found" << std::endl;
			else
				phoneBook.searchContact(i, phoneBook.contact);
		}
		else
			std::cout << "Incorrect Input" << std::endl;
	}
	return (0);
}