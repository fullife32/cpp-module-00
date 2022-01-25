/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:21:44 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/25 22:36:49 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int	main(void) {

// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	Fixed const c(Fixed(10) / Fixed(2.5f));
// 	Fixed const d(Fixed(8) - Fixed(3));
// 	Fixed const e(Fixed(-0.5f) + Fixed(2.5f));

// 	std::cout << "a:   " << a << std::endl;
// 	std::cout << "++a: " << ++a << std::endl;
// 	std::cout << "a:   " << a << std::endl;
// 	std::cout << "a++: " << a++ << std::endl;
// 	std::cout << "a:   " << a << std::endl << std::endl;

// 	std::cout << "b:         " << b << std::endl;
// 	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
// 	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl << std::endl;

// 	std::cout << "c: " << c << std::endl;
// 	std::cout << "d: " << d << std::endl;
// 	std::cout << "e: " << e << std::endl << std::endl;

// 	std::cout << "c < d: " << (c < d) << std::endl;
// 	std::cout << "d < c: " << (d < c) << std::endl;
// 	std::cout << "d > e: " << (d > e) << std::endl << std::endl;

// 	std::cout << "d + e: " << (d + e) << std::endl;
// 	std::cout << "d - a: " << (d - a) << std::endl;
// 	std::cout << "d / e: " << (d / e) << std::endl;
// 	std::cout << "e * d: " << (e * d) << std::endl;
	
// 	return 0;
// }

int main( void ) { // de Virginie

	Fixed const a (0.5f);
	Fixed const b( 10 );
	std::cout << "a < b ? " << (a < b) << std::endl;
	Fixed const c( 42.42f );
	Fixed const d( 42.42f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl << std::endl;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a + b + c = " << a + b + c << std::endl << std::endl;
	
	std::cout << "b - a = " << b - a << std::endl;
	std::cout << "b - a - c = " << b - a - c << std::endl << std::endl;

	std::cout << "b * a = " << b * a << std::endl;
	std::cout << "b * a * c = " << b * a * c << std::endl << std::endl;

	std::cout << "b / a = " << b / a << std::endl;
	std::cout << "b / a * c = " << b / a * c << std::endl << std::endl;

	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "c > b ? " << (c > b) << std::endl;

	std::cout << "c >= d ? " << (c <= d) << std::endl;

	std::cout << "a < b ? " << (a < b) << std::endl;
	std::cout << "c < b ? " << (c < b) << std::endl;
	std::cout << "c <= d ? " << (c <= d) << std::endl;

	std::cout << "c == d ? " << (c == d) << std::endl;
	std::cout << "a == b ? " << (a == b) << std::endl;

	std::cout << "c != d ? " << (c != d) << std::endl;
	std::cout << "a != b ? " << (a != b) << std::endl << std::endl;

	Fixed	e;

	std::cout << "e is " << e << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "--e = " << --e << std::endl << std::endl;


	std::cout << " min (a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << " min (c, b) = " << Fixed::min(c, b) << std::endl;
	std::cout << " max (a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << " max (c, d) = " << Fixed::max(c, d) << std::endl << std::endl;
}