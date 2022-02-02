/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/02 17:44:47 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other ) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	std::cout << "Assignment Operator Called" << std::endl;
	if ( this != &other ) {
		_name = other._name;
		_hitPts = other._hitPts;
		_energyPts = other._energyPts;
		_attackDmg = other._attackDmg;
	}
	return *this;
}

void	ClapTrap::attack( const std::string &target ) {
	if (this->_hitPts <= 0) {
		std::cout << this->_name << " has no more HP, attack canceled" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	
}
