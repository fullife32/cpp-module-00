/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:13:44 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/07 23:08:19 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap( std::string name );
	~ScavTrap();
	ScavTrap( ScavTrap const &other );
	ScavTrap &operator=( ScavTrap const &other );

	void	attack( const std::string &target );
	void	guardGate();
};

#endif