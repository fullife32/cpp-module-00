/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:27:52 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 01:58:15 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;
public:
	DiamondTrap( std::string name );
	~DiamondTrap();
	DiamondTrap( DiamondTrap const &other );
	DiamondTrap &operator=( DiamondTrap const &other );

	void	whoAmI() const;
};

#endif