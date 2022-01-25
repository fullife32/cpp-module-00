/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/25 16:49:29 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) { }

Fixed::Fixed( int const fixeInt ) : _raw(fixeInt << _bits) { }

Fixed::Fixed( float const fixeFloat ) : _raw(roundf(fixeFloat * (1 << _bits))) { }

Fixed::~Fixed() { }

Fixed::Fixed( Fixed const &other ) {
	*this = other;
}

Fixed &Fixed::operator=( Fixed const &other ) {
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

bool Fixed::operator>( Fixed const &other ) {
	if (this->toFloat() > other.toFloat())
		return true;
	else
		return false;
}

bool Fixed::operator<( Fixed const &other ) {
	if (this->toFloat() < other.toFloat())
		return true;
	else
		return false;
}

bool Fixed::operator>=( Fixed const &other ) {
	if (this->toFloat() >= other.toFloat())
		return true;
	else
		return false;
}

bool Fixed::operator<=( Fixed const &other ) {
	if (this->toFloat() <= other.toFloat())
		return true;
	else
		return false;
}

bool Fixed::operator==( Fixed const &other ) {
	if (this->toFloat() == other.toFloat())
		return true;
	else
		return false;
}

bool Fixed::operator!=( Fixed const &other ) {
	if (this->toFloat() != other.toFloat())
		return true;
	else
		return false;
}


Fixed &Fixed::operator+( Fixed const &other ) {
	float	add;
	
	add = this->toFloat() + other.toFloat();
	this->setRawBits(roundf(add * (1 << this->_bits)));
	return *this;
}

Fixed &Fixed::operator-( Fixed const &other ) {
	float	sub;
	
	sub = this->toFloat() - other.toFloat();
	this->setRawBits(roundf(sub * (1 << this->_bits)));
	return *this;
}

Fixed &Fixed::operator*( Fixed const &other ) {
	float	mul;
	
	mul = this->toFloat() * other.toFloat();
	this->setRawBits(roundf(mul * (1 << this->_bits)));
	return *this;
}

Fixed &Fixed::operator/( Fixed const &other ) {
	float	div;
	
	div = this->toFloat() / other.toFloat();
	this->setRawBits(roundf(div * (1 << this->_bits)));
	return *this;
}


// Fixed Fixed::operator++() {
	
// }

// Fixed &Fixed::operator++( int ) {
// 	return *this;
// }

// Fixed &Fixed::operator--() {
// 	return *this;
// }

// Fixed &Fixed::operator--( int ) {
// 	return *this;
// }


// static	Fixed &min( Fixed const &num_one, Fixed const &num_two )
// {
// 	(void)num_one;
// 	(void)num_two;
// }

// static	Fixed &max( Fixed const &num_one, Fixed const &num_two )
// {
// 	(void)num_one;
// 	(void)num_two;
// }

std::ostream	&operator<<( std::ostream &o, Fixed const &f ) {
	if ((char)f.getRawBits() == 0)
		o <<  f.toInt();
	else
		o <<  f.toFloat();
	return o;
}