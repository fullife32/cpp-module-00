/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:35:11 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 02:02:34 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << name << ": FragTrap Default Constructor Called" << std::endl;
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
}

FragTrap::~FragTrap() {
	std::cout << _name << ": FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &other ) : ClapTrap(other) {
	std::cout << _name << ": FragTrap Copy Constructor Called" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &other ) {
	std::cout << _name << ": FragTrap Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_name = other._name;
	_hitPts = other._hitPts;
	_energyPts = other._energyPts;
	_attackDmg = other._attackDmg;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << _name << " wants to do a High Five instead of fighting!" << std::endl;
}