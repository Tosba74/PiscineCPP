/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:34 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 23:19:20 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
	Span	sp = Span(5);
	Span	sp2 = Span(10000);
	
	sp.addNumber(1);
	sp.addNumber(42);
	sp.addNumber(36);
	sp.addNumber(54);
	sp.addNumber(57);
	
	std::cout << sp << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	
	std::srand(std::time(nullptr));
	for (unsigned int i = 0; i < sp2.getSize(); i++)
	{
		int random = std::rand();
		sp2.addNumber(random);
	}
	
	std::cout << sp2 << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
