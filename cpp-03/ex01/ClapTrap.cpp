/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 00:05:05 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0) {
	std::cout << name << ": ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << ": ClapTrap Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other ) : _name(other._name), _hitPts(other._hitPts), _energyPts(other._energyPts), _attackDmg(other._attackDmg) {
	std::cout << _name << ": ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	std::cout << _name << ": ClapTrap Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_name = other._name;
	_hitPts = other._hitPts;
	_energyPts = other._energyPts;
	_attackDmg = other._attackDmg;
	return *this;
}

void	ClapTrap::attack( const std::string &target ) {
	if (_hitPts == 0) {
		std::cout << "ClapTrap " << _name << " can't attack " << target << ", " << _name << " has no more HP!" << std::endl;
		return ;
	}
	else if (_energyPts == 0) {
		std::cout << "ClapTrap " << _name << " can't attack " << target << ", " << _name << " has no more EP!" << std::endl;
		return ;
	}
	_energyPts--;
	std::cout << "ClapTrap " << _name << " attacks " << target << " with fire blades, causing " << _attackDmg << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPts == 0) {
		std::cout << "ClapTrap " << _name << " has been attacked, but has already 0 HP!" << std::endl;
		return ;
	}
	_hitPts -= amount;
	if (_hitPts < 0)
		_hitPts = 0;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage and has " << _hitPts << " HP left!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_hitPts == 0) {
		std::cout << "ClapTrap " << _name << " can't repair itself, " << _name << " has no more HP!" << std::endl;
		return ;
	}
	else if (_energyPts == 0) {
		std::cout << "ClapTrap " << _name << " can't repair itself, " << _name << " has no more EP!" << std::endl;
		return ;
	}
	_hitPts += amount;
	_energyPts--;
	std::cout << "ClapTrap " << _name << " heals itself with a " << amount << " HP potion and has now " << _hitPts << " HP!" << std::endl;

}

void	ClapTrap::announce() const {
	std::cout << _name << " has : " << _hitPts << "HP, " << _energyPts << "EP and does " << _attackDmg << " damages." << std::endl;
}