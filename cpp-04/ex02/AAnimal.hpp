/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:24:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 18:05:34 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_H
# define A_ANIMAL_H

#include <iostream>
#include <string>

class Animal {
protected:
	std::string	_type;
public:
	Animal();
	virtual ~Animal();
	Animal( Animal const &other );
	Animal &operator=( Animal const &other );

	virtual void	makeSound() const = 0;
	std::string		getType() const;
	virtual void	printIdeas() const = 0;
};

#endif