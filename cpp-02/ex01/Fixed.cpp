/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/04 15:48:25 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const fixeInt ) : _raw(fixeInt << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const fixeFloat ) : _raw(roundf(fixeFloat * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &other ) {
		this->_raw = other.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits( void ) const {
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {
	this->_raw = raw;
}

float	Fixed::toFloat() const {
	return (double)this->_raw / (double)(1 << this->_bits);
}

int	Fixed::toInt() const {
	return this->_raw >> this->_bits;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f ) {
	if ((char)f.getRawBits() == 0)
		o <<  f.toInt();
	else
		o <<  f.toFloat();
	return o;
}