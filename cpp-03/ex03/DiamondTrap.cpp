/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:27:24 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:13:16 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << _name << ": DiamondTrap Default Constructor Called" << std::endl;
	_energyPts = 50;
}

DiamondTrap::~DiamondTrap() {
	std::cout << _name << ": DiamondTrap Default Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << _name << ": DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &other ) {
	std::cout << _name << ": DiamondTrap Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_name = other._name;
	_hitPts = other._hitPts;
	_energyPts = other._energyPts;
	_attackDmg = other._attackDmg;
	return *this;
}

void	DiamondTrap::whoAmI() const {
	std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}