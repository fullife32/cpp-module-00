/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/20 01:52:05 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

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