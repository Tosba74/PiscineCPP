/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:22:13 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/17 08:15:10 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	Weapon club2 = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	HumanB jim("Jim");

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();

	HumanB billy("Billy");
	billy.attack();
}
