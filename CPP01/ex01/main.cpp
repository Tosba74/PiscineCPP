/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:31 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/15 15:49:19 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nb;
	Zombie	*Horde;

	nb = 8;
	Horde = zombieHorde(nb, "Freeze");
	for (int i = 0; i < nb; i++)
		Horde[i].announce();
	delete [] Horde;
	return 0;
}
