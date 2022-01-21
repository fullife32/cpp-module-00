/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:03:29 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 20:50:30 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) { }

Weapon::~Weapon() { }

std::string	Weapon::getType() const {
	return (this->_type);
}
	
void		Weapon::setType( std::string type) {
	this->_type = type;
}