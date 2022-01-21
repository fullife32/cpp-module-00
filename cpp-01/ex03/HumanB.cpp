/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:01:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 21:22:59 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) { }

HumanB::~HumanB() { }

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}