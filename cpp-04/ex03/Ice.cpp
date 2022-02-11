/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:28:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:44:02 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::~Ice() { }

Ice::Ice( Ice const &other ) : AMateria(other) { }

Ice &Ice::operator=( Ice const &other ) {
	if (this == &other)
		return *this;
	return *this;
}

Ice*	Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use( ICharacter& target ) const {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}