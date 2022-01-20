/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:02:52 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/20 12:05:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	return;
}

PhoneBook::~PhoneBook( void ) {

	return;
}

void	PhoneBook::addContact( Contact *contact) {

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;
	
	std::cout << "Your first name : ";
	std::cin >> firstName;
	contact->setFirstName(firstName);
	std::cout << "Your last name : ";
	std::cin >> lastName;
	contact->setLastName(lastName);
	std::cout << "Your nickname (or gamertag) : ";
	std::cin >> nickName;
	contact->setNick(nickName);
	std::cout << "Your phone number : ";
	std::cin >> phoneNumber;
	contact->setPhone(phoneNumber);
	std::cout << "Your darkest secret : ";
	std::cin >> secret;
	contact->setSecret(secret);
}

void	PhoneBook::searchContact( int contactNumber, Contact contact[8] ) {

	int			i = 0;
	int			valid = 0;
	int			index;
	std::string	buff;

	while (valid == 0)
	{
		std::cout << std::endl << "|" << std::setw(10) << "index";
		std::cout << "|" << std::setw(10) << "first name";
		std::cout << "|" << std::setw(10) << "last name";
		std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;

		while (i < contactNumber)
		{
			std::cout << "|" << std::setw(10) << i;
			std::string truc = contact[i].getFirstName();
			std::cout << "|" << std::setw(10) << this->format( contact[i].getFirstName() );
			std::cout << "|" << std::setw(10) << this->format( contact[i].getLastName() );
			std::cout << "|" << std::setw(10) << this->format( contact[i].getNick() ) << "|" << std::endl << std::endl;
			i++;
		}
		i = 0;
		std::cout << "Enter contact index you want to see : ";
		std::cin >> buff;
		index =  (int)buff[0] - 48;
		if (index >= 0 && index <= 7 && index < contactNumber && buff.size() == 1)
		{
			valid = 1;
			std::cout << std::endl << "First name : " << contact[index].getFirstName() << std::endl;
			std::cout << "Last name : " << contact[index].getLastName() << std::endl;
			std::cout << "Nickname : " << contact[index].getNick() << std::endl;
			std::cout << "Phone number : " << contact[index].getPhone() << std::endl;
			std::cout << "Darkest secret : " << contact[index].getSecret() << std::endl << std::endl;
		}
		else
			std::cout << "Invalid input" << std::endl;
	}
	return;
}

std::string	PhoneBook::format( std::string str ) {

	int	size;

	size = str.size();
	if (size > 10)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}