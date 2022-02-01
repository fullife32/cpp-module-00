/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/01 14:41:50 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() { }

ClapTrap::~ClapTrap() { }

ClapTrap::ClapTrap( ClapTrap const &other ) { } //set variables here

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	if ( this != &other ) {
		// set variables here
	}
	return *this;
}
