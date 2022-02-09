/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:55:50 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 16:27:51 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain {
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain( std::string ideas );
	virtual ~Brain();
	Brain( Brain const &other );
	Brain &operator=( Brain const &other );

	void		printIdeas() const;
	std::string	getIdeas() const;
};

#endif