/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:34 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 00:13:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	try
	{
		std::cout << "Found : " << easyfind(v, 3) << std::endl;
	}
	catch (NotFound &e)
	{
		std::cerr << "3 " << e.what() << std::endl;
	}
	try
	{
		std::cout << "Found : " << easyfind(v, 42) << std::endl;
	}
	catch (NotFound &e)
	{
		std::cerr << "42 " << e.what() << std::endl;
	}
	return 0;
}