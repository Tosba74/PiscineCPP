/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:46:51 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 23:06:03 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Pat("Pat");
	ScavTrap Bob("bob");

    Bob.attack(Pat.getName());
    Pat.takeDamage(Bob.getAttack());
    Pat.beRepaired(Pat.getEnergy());
    Pat.highFivesGuys();
    Pat.attack(Bob.getName());
    Bob.takeDamage(Pat.getAttack());
    Bob.beRepaired(Bob.getEnergy());
    Bob.guardGate();
    std::cout << Bob << std::endl;
    std::cout << Pat << std::endl;
	return (0);
}
