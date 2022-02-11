/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:27:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 18:00:02 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure( Cure const &other );
	Cure &operator=( Cure const &other );

	virtual Cure*	clone() const;
	virtual void	use( ICharacter& target ) const;
};

#endif