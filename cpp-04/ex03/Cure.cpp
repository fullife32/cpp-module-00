/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:28:49 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:44:11 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::~Cure() { }

Cure::Cure( Cure const &other ) : AMateria(other) { }

Cure &Cure::operator=( Cure const &other ) {
	if (this == &other)
		return *this;
	return *this;
}

Cure*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use( ICharacter& target ) const {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}