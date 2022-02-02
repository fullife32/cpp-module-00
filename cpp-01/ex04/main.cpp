/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/02 16:03:19 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

std::string	replaceLine(std::string str, std::string s1, std::string s2) {
	std::size_t found = str.find(s1);

	while (found != std::string::npos)
	{
		str.erase(found, s1.length());
		str.insert(found, s2);
		found = str.find(s1.c_str(), found + s2.length(), s1.length());
	}
	return (str);
}

std::string	getExtension( std::string fileName ) {

	fileName.append(".replace");
	return fileName;
}

int	main(int ac, char* av[]) {
	std::string	dst;

	if (ac != 4)
	{
		std::cerr << "Error: There must be 3 arguments" << std::endl;
		return 1;
	}

	std::string	original = av[2];
	std::string	replace = av[3];
	
	if (original.length() == 0 || replace.length() == 0)
	{
		std::cerr << "Error: Both strings must not be empty" << std::endl;
		return 1;
	}

	std::ifstream	ifs(av[1]);

	if (!ifs)
	{
		std::cerr << "Error: " << av[1] << ": no such file" << std::endl;
		return 1;
	}

	std::ofstream	ofs(getExtension(av[1]).c_str());
	
	while (!ifs.eof() && !ifs.fail())
	{
		std::getline(ifs, dst);
		ofs << replaceLine(dst, original, replace) << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}