/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:12:20 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:52:49 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria() { }

AMateria::AMateria( std::string const &type ) : m_type(type) { }

AMateria::~AMateria() { }

AMateria::AMateria( AMateria const &other ) {
	*this = other;
}

AMateria &AMateria::operator=( AMateria const &other ) {
	if ( this == &other )
		return *this;
	return *this;
}

std::string const	&AMateria::getType() const {
	return m_type;
}

void	AMateria::use( ICharacter& target ) const {
	std::cout << "Use of a Materia on " << target.getName() << std::endl;
}