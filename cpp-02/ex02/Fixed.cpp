/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/04 16:04:36 by eassouli         ###   ########.fr       */
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

bool	Fixed::operator>( Fixed const &other ) const {
	return other < *this;
}

bool	Fixed::operator<( Fixed const &other ) const {
	return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=( Fixed const &other ) const {
	return !(*this < other);
}

bool	Fixed::operator<=( Fixed const &other ) const {
	return !(other < *this);
}

bool	Fixed::operator==( Fixed const &other ) const {
	return this->getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=( Fixed const &other ) const {
	return !(*this == other);
}

Fixed	Fixed::operator+( Fixed const &other ) const {
	Fixed	tmp;

	tmp.setRawBits(this->_raw + other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-( Fixed const &other ) const {
	Fixed	tmp;

	tmp.setRawBits(this->_raw - other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*( Fixed const &other ) const {
	Fixed	tmp;

	tmp.setRawBits((this->_raw * other.getRawBits()) >> this->_bits);
	return tmp;
}

Fixed	Fixed::operator/( Fixed const &other ) const {
	Fixed	tmp;

	tmp.setRawBits((this->_raw << this->_bits) / other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator++() {
	Fixed	tmp;

	tmp.setRawBits(++this->_raw);
	return tmp;
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp;

	tmp.setRawBits(this->_raw++);
	return tmp;
}

Fixed	Fixed::operator--() {
	Fixed	tmp;

	tmp.setRawBits(--this->_raw);
	return tmp;
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp;

	tmp.setRawBits(this->_raw--);
	return tmp;
}

Fixed	&Fixed::min( Fixed &numOne, Fixed &numTwo )
{
	if (numOne < numTwo)
		return numOne;
	else
		return numTwo;
}

Fixed	&Fixed::max( Fixed &numOne, Fixed &numTwo )
{
	if (numOne > numTwo)
		return numOne;
	else
		return numTwo;
}

Fixed const	&Fixed::min( Fixed const &numOne, Fixed const &numTwo )
{
	if (numOne < numTwo)
		return numOne;
	else
		return numTwo;
}

Fixed const	&Fixed::max( Fixed const &numOne, Fixed const &numTwo )
{
	if (numOne > numTwo)
		return numOne;
	else
		return numTwo;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f ) {
	if ((char)f.getRawBits() == 0)
		o <<  f.toInt();
	else
		o <<  f.toFloat();
	return o;
}