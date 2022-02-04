/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:24:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/25 23:39:57 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_raw;
	static int const	_bits = 8;
public:
	Fixed();
	Fixed( int const fixeInt );
	Fixed( float const fixeFloat );
	~Fixed();
	Fixed( Fixed const &other );
	Fixed &operator=( Fixed const &other );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat() const;
	int		toInt() const;

	bool	operator>( Fixed const &other ) const;
	bool	operator<( Fixed const &other ) const;
	bool	operator>=( Fixed const &other ) const;
	bool	operator<=( Fixed const &other ) const;
	bool	operator==( Fixed const &other ) const;
	bool	operator!=( Fixed const &other ) const;

	Fixed	operator+( Fixed const &other ) const;
	Fixed	operator-( Fixed const &other ) const;
	Fixed	operator*( Fixed const &other ) const;
	Fixed	operator/( Fixed const &other ) const;

	Fixed	operator++();
	Fixed	operator++( int );
	Fixed	operator--();
	Fixed	operator--( int );
	
	static Fixed		&min( Fixed &numOne, Fixed &numTwo );
	static Fixed		&max( Fixed &numOne, Fixed &numTwo );
	static Fixed const	&min( Fixed const &numOne, Fixed const &numTwo );
	static Fixed const	&max( Fixed const &numOne, Fixed const &numTwo );
};

std::ostream	&operator<<( std::ostream &o, Fixed const &n );

#endif