/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:12:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 15:10:13 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << name << ": ScavTrap Default Constructor Called" << std::endl;
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << _name << ": ScavTrap Default Destructor Called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other ) : ClapTrap(other) {
	std::cout << _name << ": ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &other ) {
	std::cout << _name << ": ScavTrap Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_name = other._name;
	_hitPts = other._hitPts;
	_energyPts = other._energyPts;
	_attackDmg = other._attackDmg;
	return *this;
}

void	ScavTrap::attack( const std::string &target ) {
	if (_hitPts == 0) {
		std::cout << "ScavTrap " << _name << " can't attack " << target << ", " << _name << " has no more HP!" << std::endl;
		return ;
	}
	else if (_energyPts == 0) {
		std::cout << "ScavTrap " << _name << " can't attack " << target << ", " << _name << " has no more EP!" << std::endl;
		return ;
	}
	_energyPts--;
	std::cout << "ScavTrap " << _name << " attacks " << target << " with a silver sword, causing " << _attackDmg << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() const {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
