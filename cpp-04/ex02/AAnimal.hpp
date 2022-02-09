/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:24:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 18:49:51 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_H
# define A_ANIMAL_H

#include <iostream>
#include <string>

class AAnimal {
protected:
	std::string	_type;
public:
	AAnimal() { }
	virtual ~AAnimal() { }

	virtual void		makeSound() const = 0;
	virtual std::string	getType() const;
	virtual void		printIdeas() const = 0;
};

#endif