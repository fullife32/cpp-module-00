/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:04:08 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/20 00:12:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact( void ) {

	return;
}

Contact::~Contact( void ) {

	return;
}

std::string	Contact::getFirstName( void ) const {

	return (this->_firstName);
}

void	Contact::setFirstName( std::string name ) {

	this->_firstName = name;
	return;
}

std::string	Contact::getLastName( void ) const {

	return (this->_lastName);
}

void	Contact::setLastName( std::string name ) {

	this->_lastName = name;
	return;
}

std::string	Contact::getNick( void ) const {

	return (this->_nickname);
}

void	Contact::setNick( std::string nick ) {

	this->_nickname = nick;
	return;
}

std::string	Contact::getPhone( void ) const {

	return (this->_phoneNumber);
}

void	Contact::setPhone( std::string phone ) {

	this->_phoneNumber = phone;
	return;
}

std::string	Contact::getSecret( void ) const {

	return (this->_secret);
}

void	Contact::setSecret( std::string secret ) {

	this->_secret = secret;
	return;
}
