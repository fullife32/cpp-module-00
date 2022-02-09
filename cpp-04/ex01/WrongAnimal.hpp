/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:20:22 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:31:02 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal( WrongAnimal const &other );
	WrongAnimal &operator=( WrongAnimal const &other );

	void		makeSound() const;
	std::string	getType() const;
};

#endif