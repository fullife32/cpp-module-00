/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:39 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 18:12:51 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include "EasyFind.hpp"

int main () {
	int myInts[] = { 10, 20, 30, 40 };

	std::list<int> myList (myInts, myInts+4);
	std::list<int>::iterator itL;
	
	
	itL = ::easyFind(myList, 30);
	if (itL != myList.end())
		std::cout << *itL << std::endl;
	else
		std::cout << "No occurence found in this list" << std::endl;

	itL = ::easyFind(myList, 50);
	if (itL != myList.end())
		std::cout << *itL << std::endl;
	else
		std::cout << "No occurence found in this list" << std::endl;

	std::vector<int> myVector (myInts, myInts+4);
	std::vector<int>::iterator itV;

	itV = ::easyFind(myVector, 20);
	if (itV != myVector.end())
		std::cout << *itV << std::endl;
	else
		std::cout << "No occurence found in this vector" << std::endl;

	itV = ::easyFind(myVector, 50);
	if (itV != myVector.end())
		std::cout << *itV << std::endl;
	else
		std::cout << "No occurence found in this vector" << std::endl;

	return 0;
}