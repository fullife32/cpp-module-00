/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:08:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 19:15:27 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
# define A_MATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string const	m_type;
public:
	AMateria( std::string const &type );
	~AMateria();
	AMateria( AMateria const &other );
	AMateria &operator=( AMateria const &other );

	std::string const	&getType() const;

	virtual AMateria* clone() const = 0;
	virtual void		use( ICharacter& target );
};

#endif