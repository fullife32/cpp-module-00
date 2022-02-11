/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:27:11 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 18:00:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();
	Ice( Ice const &other );
	Ice &operator=( Ice const &other );

	virtual Ice*	clone() const;
	virtual void	use( ICharacter& target ) const;
};

#endif