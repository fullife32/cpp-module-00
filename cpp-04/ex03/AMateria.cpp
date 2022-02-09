/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:12:20 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 19:17:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) { }

AMateria::~AMateria() { }

AMateria::AMateria( AMateria const &other ) /* : Insert init list here */ { }

AMateria &AMateria::operator=( AMateria const &other ) {
	if ( this == &other )
		return *this;
	// Insert code here
	return *this;
}

std::string const	&AMateria::getType() const {
	
}

void	use( ICharacter& target ) {
	
}