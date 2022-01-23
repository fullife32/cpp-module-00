/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/23 20:40:44 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

class PhoneBook {
private:
	Contact	_contact[8];

public:
	PhoneBook( void );
	~PhoneBook( void );

	void		addContact( Contact &contact );
	void		searchContact( int contactNumber, Contact contact[8] );

	std::string	format( std::string str );
	Contact&	getOneContact( int i );
	Contact*	getAllContacts();
};

#endif