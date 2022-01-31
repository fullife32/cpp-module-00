/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/31 18:57:32 by eassouli         ###   ########.fr       */
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
	std::string	_format( std::string str );

public:
	PhoneBook( void );
	~PhoneBook( void );

	void		addContact( Contact &contact );
	void		searchContact( int contactNumber, Contact contact[8] );
	Contact&	getOneContact( int i );
	Contact*	getAllContacts();
};

#endif