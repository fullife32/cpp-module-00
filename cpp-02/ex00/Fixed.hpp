/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:24:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/24 18:05:23 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
private:
	int					_raw;
	static int const	_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed( Fixed const &other );
	Fixed &operator=( Fixed const &other );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif