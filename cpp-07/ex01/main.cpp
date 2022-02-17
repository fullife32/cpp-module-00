/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:39 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/17 18:09:00 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Sample tab2[5];
	float tab3[] = { 5.2f, 3.72f, 42.42f };

	::iter( tab, 5, print );
	::iter( tab2, 5, print );
	std::cout << std::endl;
	::iter( tab, 5, upTen );
	::iter( tab2, 5, upTenSample );
	std::cout << std::endl;
	::iter( tab3, 3, printFloat );

	return 0;
}