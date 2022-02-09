/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:28:59 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 16:29:55 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat( std::string type );
	virtual ~WrongCat();
	WrongCat( WrongCat const &other );
	WrongCat &operator=( WrongCat const &other );

	void	makeSound() const;
};

#endif