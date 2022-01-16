/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:46:51 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 21:44:55 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Scav;
	ScavTrap Pat("Pat");
	ScavTrap Bob("bob");

    Scav = Bob;
    Scav.attack(Pat.getName());
    Pat.takeDamage(4);
    Pat.beRepaired(6);
    Pat.guardGate();
    std::cout << Scav << std::endl;
    std::cout << Pat << std::endl;
	return (0);
}
