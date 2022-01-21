/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:59:19 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 16:38:08 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstring>
#include <iostream>

class Contact {
public:
	Contact( void );
	~Contact( void );

	std::string	getFirstName( void ) const;
	void	setFirstName( std::string name );
	std::string	getLastName( void ) const;
	void	setLastName( std::string name );
	std::string	getNick( void ) const;
	void	setNick( std::string nick );
	std::string	getPhone( void ) const;
	void	setPhone( std::string phone );
	std::string	getSecret( void ) const;
	void	setSecret( std::string secret );

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_secret;
};

#endif