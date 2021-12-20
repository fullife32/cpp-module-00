/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2021/12/20 17:59:25 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class PhoneBook {

public:

	Contact	contact[8];

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( void );
	void	searchContact( void );
};

#endif