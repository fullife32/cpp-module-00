/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/20 14:55:15 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>
#include <istream>
#include <cstdlib>

class PhoneBook {
public:
	PhoneBook( void );
	~PhoneBook( void );

	Contact	contact[8];
	
	void		addContact( Contact *contact );
	void		searchContact( int contactNumber, Contact contact[8] );
	std::string	format( std::string str );
};

#endif