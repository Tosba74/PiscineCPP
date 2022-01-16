/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:46:51 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/10 16:14:21 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Pat;
	ClapTrap Bob("bob");

	Pat.attack("bob");
	Bob.takeDamage(9);
	Bob.beRepaired(5);
	Bob.beRepaired(5);
	Bob.attack("Patrick");
	Pat.takeDamage(10);
	Pat.beRepaired(10);
	operator<<(std::cout, Bob);
	operator<<(std::cout, Pat);
	return (0);
}