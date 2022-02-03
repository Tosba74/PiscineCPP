/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:58:25 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/14 08:37:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int nb, std::string name)
{
	int i = 0;

	if (nb < 1)
        return (NULL);

	Zombie *horde = new Zombie[nb];

	for (i = 0; i < nb; i++)
		horde[i].setname(name);
	return (horde);	
}

