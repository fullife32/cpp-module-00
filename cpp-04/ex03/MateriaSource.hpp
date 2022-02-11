/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:17:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:32:34 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria*	m_stock[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource( MateriaSource const &other );
	MateriaSource &operator=( MateriaSource const &other );

	void		learnMateria(AMateria* materia);
	AMateria*	createMateria(std::string const & type);
};

#endif
