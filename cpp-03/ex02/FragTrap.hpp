/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:32:44 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/07 23:34:59 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap( std::string name );
	~FragTrap();
	FragTrap( FragTrap const &other );
	FragTrap &operator=( FragTrap const &other );

	void	highFivesGuys();
};

#endif