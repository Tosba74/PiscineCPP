/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 08:25:12 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/26 18:43:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <dirent.h>

void	check_secu(std::string filename, std::string s1, std::string s2)
{
	DIR				*dir = opendir(filename.c_str());

	if (s1 == s2)
	{
		std::cout << "String#1 & String#2 must be differents" << std::endl;
		exit(-1);
	}
	if ((filename.empty()) || (s1.empty()) || (s2.empty()))
	{
		std::cout << "At least one argument is empty !" << std::endl;
		exit(-1);
	}
	if (dir != nullptr)
	{
		std::cout << "Specified filename is a directory" << std::endl;
		closedir(dir);
		exit(-1);
	}
}
int		sed(std::string filename, std::string s1, std::string s2)
{
	unsigned long	index;
	std::string			str, tmp, line;
	std::ifstream		ifs;
	std::ofstream		ofs;

	check_secu(filename, s1, s2);
	ifs.open(filename.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Can't open the file" << std::endl;
		return (1);
	}
	ofs.open((filename + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cout << "Can't create the new file" << std::endl;
		return (1);
	}
	while (getline(ifs, str))
	{	
		index = 0;
		while ((index = str.find(s1, index)) != std::string::npos)
		{
			str.erase(index, s1.length());
			str.insert(index, s2);
			index += s2.length();
		}
		ofs << str << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./sed <filename> <string#1> <string#2>" << std::endl;
		return (1);
	}
	return (sed(av[1], av[2], av[3]));
}